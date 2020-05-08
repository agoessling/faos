#!/usr/bin/env python3

import mmu
import peripherals

_XML_FILE = '../targetdb/devices/AM3358.xml'
_CORE = 'CortexA8'
_CPU = peripherals.Cpu(_XML_FILE, _CORE)


class Thread:
  def __init__(self, name, priority, peripherals, mailboxes):
    self.name = name
    self.priority = priority

    self.peripherals = []
    for name in peripherals:
      periph_list = [x for x in _CPU.peripherals if x.name == name]

      if not periph_list:
        raise ValueError('Unrecognized peripheral: {:s}'.format(name))
      if len(periph_list) != 1:
        raise ValueError('More than one peripheral found for {:s}.'.format(name))

      self.peripherals.append(periph_list[0])

    self.mailboxes = mailboxes

  def __repr__(self):
    indent = '  '
    s = ''
    s += 'Thread: {:s}\n'.format(self.name)
    s += '{:s}Priority: {:d}\n'.format(indent, self.priority)

    s += '{:s}Peripherals:{:s}\n'.format(indent, ' None' if not self.peripherals else '')
    for periph in self.peripherals:
      s += '{:s}{:s}: {:#010x}\n'.format(2 * indent, periph.name, periph.start)

    s += '{:s}Mailboxes:{:s}\n'.format(indent, ' None' if not self.mailboxes else '')
    for mailbox in self.mailboxes:
      s += '{:s}{:s}\n'.format(2 * indent, mailbox)

    return s

  def get_page_table(self, thread_base_addr, mailbox_base_addr):
    thread_section = mmu.FirstLevelSectionEntry()
    mmu.set_memory_attributes(thread_section, 'normal')
    mmu.set_access_permissions(thread_section, 'rw', 'rw')
    thread_section.ng = 1

    # Check if base address is correctly aligned.
    if thread_base_addr & 0x000FFFFF:
      raise ValueError('Thread base address not 1MB aligned: {:010x}'.format(thread_base_addr))
    thread_section.base_addr = thread_base_addr >> 20


    first_level_table = mmu.FirstLevelTable()

    megabyte = 1024 * 1024
    first_level_table[0x00000000 // megabyte] = mmu.FirstLevelSectionEntry()

def main():
  uart = Thread('Uart', 2, ['UART0'], ['Input'])
  logger = Thread('Logger', 3, [], ['Input'])
  talker = Thread('Talker', 4, [], [])

  print(uart)
  print(logger)
  print(talker)

if __name__ == '__main__':
  main()
