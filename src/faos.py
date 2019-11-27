#!/usr/bin/env python3

import mmu
import peripherals

_XML_FILE = '../targetdb/devices/AM3358.xml'
_CORE = 'CortexA8'

class Thread:
  def __init__(self, name, priority, peripherals):
    self.name = name
    self.priority = priority
    self.peripherals = peripherals

  def make_page_table(self):
    first_level = mmu.generate_first_level_table()
    mmu.print_struct(first_level[16].super_section)
    return first_level

  def __repr__(self):
    return 'Thread: {:s}, Priority: {:d}'.format(self.name, self.priority)

def main():
  uart = Thread('Uart', 2, ['UART0'])
  print(uart)
  table = uart.make_page_table()
  print(mmu.table_to_c_array('uart_table', table))

if __name__ == '__main__':
  main()
