#!/usr/bin/env python3

import peripherals

_XML_FILE = '../targetdb/devices/AM3358.xml'
_CORE = 'CortexA8'

class Thread:
  def __init__(self, name, priority, peripherals):
    self.name = name
    self.priority = priority
    self.peripherals = peripherals

  def make_page_table(self):
    first_level = FirstLevelTable()

  def __repr__(self):
    return 'Thread: {:s}, Priority: {:d}'.format(self.name, self.priority)

def main():
  uart = Thread('Uart', 2, ['UART0'])
  print(uart)

if __name__ == '__main__':
  main()
