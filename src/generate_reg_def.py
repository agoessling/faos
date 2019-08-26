#!/usr/bin/env python3

import argparse
import os
import xml.etree.ElementTree as ET

class Bitfield:
  @classmethod
  def from_xml(cls, elem, path, prefix):
    name = elem.get('id').upper()
    if name.startswith(prefix + '_'):
      name = name[len(prefix) + 1:]
    return cls(
        path=path,
        name=name,
        start=int(elem.get('end')), # XML begin and end are backwards.
        end=int(elem.get('begin')),
        width=int(elem.get('width')))

  def __init__(self, path, name, start, end, width):
    self.path = path
    self.name = name
    self.start = start
    self.end = end
    self.width = width

    if self.end - self.start + 1 != self.width:
      raise ValueError('Size mismatch {}'.format(self))

  def __repr__(self):
    return '{:s} {:d}-{:d}'.format(self.name, self.start, self.end)

class Register:
  def __init__(self, elem, prefix, path):
    self.path = path

    self.name = elem.get('acronym').upper()
    if self.name.startswith(prefix + '_'):
      self.name = self.name[len(prefix) + 1:]

    self.offset = int(elem.get('offset'), 16)
    self.width = int(elem.get('width'))

    if self.width % 8 != 0:
      raise ValueError('Unaligned register width: {}'.format(self))

    self.bitfields = []
    for e in elem.iter('bitfield'):
      self.bitfields.append(Bitfield.from_xml(e, path, self.name))

    self.bitfields.sort(key=lambda x: x.start)

    bit_pos = 0
    reserve_count = 0
    reserves = []
    for bit in self.bitfields:
      if bit_pos < bit.start:
        reserves.append(Bitfield(path, 'RESERVED_BITS_{:d}'.format(reserve_count), bit_pos,
                                 bit.start - 1, bit.start - bit_pos))
        reserve_count += 1

      bit_pos = bit.end + 1

    if self.bitfields and self.bitfields[-1].end < self.width - 1:
      reserves.append(Bitfield(path, 'RESERVED_BITS_{:d}'.format(reserve_count),
        self.bitfields[-1].end + 1, self.width - 1, self.width - self.bitfields[-1].end - 1))

    self.bitfields += reserves
    self.bitfields.sort(key=lambda x: x.start)

    for i in range(len(self.bitfields) - 1):
      if self.bitfields[i].end >= self.bitfields[i + 1].start:
        raise ValueError('Bitfield overlap {} - {}'.format(
            self.bitfields[i], self.bitfields[i + 1]))

    if self.bitfields and self.bitfields[-1].end >= self.width:
      raise ValueError('Bitfield out of range {}'.format(self.bitfields[-1]))

    if self.bitfields and sum([x.width for x in self.bitfields]) != self.width:
      raise ValueError('Missing bits {}'.format(self))

  def to_file(self):
    s = ''
    s += 'typedef union {\n'
    s += '  struct {\n'
    for bit in self.bitfields:
      s += '    uint{:d}_t {:s} : {:d};\n'.format(self.width, bit.name, bit.width)
    s += '  };\n'
    s += '  uint{:d}_t raw;\n'.format(self.width)
    s += '}} Register{:s};'.format(self.name)
    return s

  def __repr__(self):
    s = ''
    s += '{}: {}'.format(self.name, self.path)
    for bit in self.bitfields:
      s += '\n  {}'.format(bit)
    return s

class Peripheral:
  def __init__(self, elem, parent_path):
    self.name = elem.get('id').upper()
    self.description = elem.get('description')
    self.start = int(elem.get('baseaddr'), 16)
    # Ignore endaddr as it is consistently wrong.
    self.size = int(elem.get('size'), 16)
    self.end = self.start + self.size - 1

    self.path = os.path.join(parent_path, elem.get('href'))
    tree = ET.parse(self.path)
    root = tree.getroot()

    self.registers = {}
    for elem in root.iter('register'):
      register = Register(elem, self.name, self.path)

      if register.offset in self.registers:
        self.registers[register.offset].append(register)
      else:
        self.registers[register.offset] = [register]

  def to_file(self):
    s = ''

    for reg_list in self.registers.values():
      for reg in reg_list:
        s += '{:s}\n\n'.format(reg.to_file())

    s += 'typedef struct {\n'
    cur_offset = 0
    extra_count = 0
    for offset in sorted(self.registers.keys()):
      if cur_offset < offset:
        s += '  uint8_t RESERVED_OFFSETS_{:d}[{:d}];\n'.format(extra_count, offset - cur_offset)
        cur_offset = offset
        extra_count += 1

      indent = ''
      if len(self.registers[offset]) > 1:
        s += '  union {\n'
        indent = '  '

      for reg in self.registers[offset]:
        s += '  {:s}Register{:s} {:s};\n'.format(indent, reg.name, reg.name)

      if len(self.registers[offset]) > 1:
        s += '  };\n'

      cur_offset = offset + self.registers[offset][0].width // 8
    s += '}} Peripheral{:s};'.format(self.name)
    return s

  def __repr__(self):
    return '{:s} ({:#010x}-{:#010x})'.format(self.name, self.start, self.start + self.size - 1)

class Cpu:
  def __init__(self, elem, path):
    self.name = elem.get('id').upper()

    self.peripherals = []
    for elem in elem.iter('instance'):
      self.peripherals.append(Peripheral(elem, path))

    self.peripherals.sort(key=lambda x: x.start)
    for i in range(len(self.peripherals) - 1):
      if self.peripherals[i].end >= self.peripherals[i + 1].start:
        raise ValueError('Peripheral overlap {} - {}'.format(
            self.peripherals[i], self.peripherals[i + 1]))

  def __repr__(self):
    s = ''
    s += '{:s}\n'.format(self.name)
    s += '  Peripherals:'

    for peripheral in self.peripherals:
      s += '\n    {}'.format(peripheral)

    return s

  def to_file(self):
    s = ''

    path_dict = {}
    for peripheral in self.peripherals:
      if peripheral.path not in path_dict:
        path_dict[peripheral.path] = peripheral.name
        s += '{:s}\n\n'.format(peripheral.to_file())

    for peripheral in self.peripherals:
      s += '#define {:s} (*((Peripheral{:s} *){:#010x}))\n'.format(peripheral.name,
          path_dict[peripheral.path], peripheral.start)

    return s[:-1]

def main():
  parser = argparse.ArgumentParser(description='Create register definition from TI XML.')
  parser.add_argument('infile', help='TI XML file.')
  parser.add_argument('outfile', help='Output header file.')
  args = parser.parse_args()

  tree = ET.parse(args.infile)
  root = tree.getroot()

  cpu = None
  for elem in root.iter('cpu'):
    if elem.get('id') == 'CortexA8':
      cpu = Cpu(elem, os.path.dirname(args.infile))
      break

  with open(args.outfile, 'w') as f:
    f.write('#ifndef REG_DEF_H_\n')
    f.write('#define REG_DEF_H_\n')
    f.write('\n')
    f.write('#include <stdint.h>\n')
    f.write('\n')
    f.write(cpu.to_file())
    f.write('\n')

if __name__ == '__main__':
  main()
