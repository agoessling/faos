#!/usr/bin/env python3

import os
import re
import xml.etree.ElementTree as ET

def get_basename(name):
  match = re.match(r'(\w+?)\d+$', name)
  if match:
    return match.group(1)
  else:
    return name

def strip_parent_name(name, parent_name):
  basename = get_basename(parent_name)
  prefix = [parent_name + '_', parent_name, basename + '_', basename]
  for p in prefix:
    if name.startswith(p) and len(p) < len(name):
      return name[len(p):]
  if name.startswith('_'):
    return name[1:]
  return name

class Bitfield:
  @classmethod
  def from_xml(cls, elem, parent):
    keywords = ['NULL']
    name = strip_parent_name(elem.get('id').upper(), parent.name)
    if name[0].isdigit():
      name = 'd' + name
    if name in keywords:
      name = 'v' + name
    return cls(
        name=name,
        start=int(elem.get('end')), # XML begin and end are backwards.
        end=int(elem.get('begin')),
        width=int(elem.get('width')),
        parent=parent)

  def __init__(self, name, start, end, width, parent):
    self.name = name
    self.start = start
    self.end = end
    self.width = width
    self.parent = parent

    if self.end - self.start + 1 != self.width:
      raise ValueError('Size mismatch {}'.format(self))

class Register:
  def __init__(self, elem, parent):
    self.parent = parent

    self.name = strip_parent_name(elem.get('acronym').upper(), parent.name)
    self.type_name = parent.name + '_' + self.name

    self.offset = int(elem.get('offset'), 16)
    self.width = int(elem.get('width'))

    if self.width % 8 != 0:
      raise ValueError('Unaligned register width: {}'.format(self))

    self.bitfields = []
    for e in elem.iter('bitfield'):
      self.bitfields.append(Bitfield.from_xml(e, self))

    self.bitfields.sort(key=lambda x: x.start)

    bit_pos = 0
    reserve_count = 0
    reserves = []
    for bit in self.bitfields:
      if bit_pos < bit.start:
        reserves.append(Bitfield('RESERVED_BITS_{:d}'.format(reserve_count), bit_pos, bit.start - 1,
                                 bit.start - bit_pos, self))
        reserve_count += 1

      bit_pos = bit.end + 1

    if self.bitfields and self.bitfields[-1].end < self.width - 1:
      reserves.append(Bitfield('RESERVED_BITS_{:d}'.format(reserve_count),
                               self.bitfields[-1].end + 1, self.width - 1,
                               self.width - self.bitfields[-1].end - 1, self))

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
    if self.bitfields:
      s += '  struct {\n'
      for bit in self.bitfields:
        s += '    uint{:d}_t {:s} : {:d};  // Bits {:d}:{:d}.\n'.format(
            self.width, bit.name, bit.width, bit.end, bit.start)
      s += '  };\n'
    s += '  uint{:d}_t raw;\n'.format(self.width)
    s += '}} Register{:s};\n'.format(self.type_name)
    s += '\n'
    s += '_Static_assert(sizeof(Register{:s}) == {:d}, "Incorrect register size.");'.format(
        self.type_name, self.width // 8)
    return s

class Peripheral:
  def __init__(self, elem, parent):
    self.parent = parent
    self.name = elem.get('id').upper()
    self.description = elem.get('description')
    self.start = int(elem.get('baseaddr'), 16)
    self.end = int(elem.get('endaddr'), 16)
    self.size = int(elem.get('size'), 16)

    if self.end - self.start + 1 != self.size:
      raise ValueError('Peripheral size mismatch: {}'.format(self))

    self.path = os.path.join(self.parent.path, elem.get('href'))
    tree = ET.parse(self.path)
    root = tree.getroot()

    self.registers = {}
    for elem in root.iter('register'):
      register = Register(elem, self)

      if register.offset >= self.size:
        raise ValueError('Register offset out of range: {}'.format(register))

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
        s += '  uint8_t RESERVED_OFFSETS_{:d}[{:d}];  // Offset: {:#x}.\n'.format(
            extra_count, offset - cur_offset, cur_offset)
        cur_offset = offset
        extra_count += 1

      indent = ''
      if len(self.registers[offset]) > 1:
        s += '  union {\n'
        indent = '  '

      for reg in self.registers[offset]:
        s += '  {:s}Register{:s} {:s};  // Offset: {:#x}.\n'.format(
            indent, reg.type_name, reg.name, cur_offset)

      if len(self.registers[offset]) > 1:
        s += '  };\n'

      cur_offset = offset + self.registers[offset][0].width // 8

    if cur_offset < self.size:
      s += '  uint8_t RESERVED_OFFSETS_{:d}[{:d}];  // Offset: {:#x}.\n'.format(
          extra_count, self.size - cur_offset, cur_offset)

    s += '}} Peripheral{:s};\n'.format(self.name)
    s += '\n'
    s += '_Static_assert(sizeof(Peripheral{:s}) == {:#x}, "Incorrect peripheral size.");'.format(
        self.name, self.size)
    return s

class Cpu:
  def __init__(self, xml_file, cpu_type):
    self.path = os.path.dirname(xml_file)

    tree = ET.parse(xml_file)
    root = tree.getroot()

    elem = None
    for e in root.iter('cpu'):
      if e.get('id') == cpu_type:
        elem = e
        break

    if elem is None:
      raise ValueError('{:s} not found in {:s}'.format(cpu_type, xml_file))

    self.peripherals = []
    self.unique_peripherals = {}
    for elem in elem.iter('instance'):
      peripheral = Peripheral(elem, self)
      self.peripherals.append(peripheral)
      if peripheral.path not in self.unique_peripherals:
        self.unique_peripherals[peripheral.path] = peripheral

    self.peripherals.sort(key=lambda x: x.start)
    for i in range(len(self.peripherals) - 1):
      if self.peripherals[i].end >= self.peripherals[i + 1].start:
        raise ValueError('Peripheral overlap {} - {}'.format(
            self.peripherals[i], self.peripherals[i + 1]))

  def structure_to_file(self):
    s = ''

    for peripheral in self.unique_peripherals.values():
      s += '{:s}\n\n'.format(peripheral.to_file())

    return s[:-2]

  def address_to_file(self, peripherals):
    s = ''

    for peripheral in peripherals:
      s += '#define {:s} (*((volatile Peripheral{:s} *){:#010x}))\n'.format(peripheral.name,
          self.unique_peripherals[peripheral.path].name, peripheral.start)

    return s[:-1]

  def to_file(self):
    s = ''
    s += self.structure_to_file()
    s += '\n'
    s += '\n'
    s += self.address_to_file(self.peripherals)
    return s
