#!/usr/bin/env python3

import copy
import textwrap

import mmu
import peripherals

_XML_FILE = '../am3358_db/devices/AM3358.xml'
_CORE = 'CortexA8'


def align(address, alignment):
  return (address + alignment - 1) // alignment * alignment


def none_or(value, format_string):
  if not value:
    return 'None'

  return format_string.format(value)


class Thread:
  _THREAD_VA = 0x00000000
  _PERIPHERAL_VA = 0x20000000
  _MAILBOX_VA = 0x30000000

  def __init__(self, name, priority):
    self.name = name
    self.priority = priority
    self.peripherals = []
    self.mailboxes = []
    self.thread_pa = None
    self.mailbox_pa = None
    self.first_table_pa = None
    self.peripheral_table_pa = None
    self.mailbox_table_pa = None

  def __str__(self):
    indent = '  '
    s = ''
    s += 'Thread: {:s}\n'.format(self.name)
    s += '{:s}Priority: {:d}\n'.format(indent, self.priority)

    s += '{:s}Physical Addresses:\n'.format(indent)
    s += '{:s}Thread PA: {:s}\n'.format(2 * indent, none_or(self.thread_pa, '{:#010x}'))
    s += '{:s}Mailbox PA: {:s}\n'.format(2 * indent, none_or(self.mailbox_pa, '{:#010x}'))
    s += '{:s}First Level Table PA: {:s}\n'.format(
        2 * indent, none_or(self.first_table_pa, '{:#010x}'))
    s += '{:s}Peripheral Table PA: {:s}\n'.format(
        2 * indent, none_or(self.peripheral_table_pa, '{:#010x}'))
    s += '{:s}Mailbox Table PA: {:s}\n'.format(
        2 * indent, none_or(self.mailbox_table_pa, '{:#010x}'))

    s += '{:s}Peripherals:{:s}\n'.format(indent, ' None' if not self.peripherals else '')
    for periph in self.peripherals:
      s += '{:s}{:s}: {:d}kB ({:#010x})\n'.format(
          2 * indent, periph.name, periph.size // 1024, periph.start)

    s += '{:s}Mailboxes:{:s}\n'.format(indent, ' None' if not self.mailboxes else '')
    for mailbox in self.mailboxes:
      s += '{:s}\n'.format(textwrap.indent(str(mailbox), 2 * indent))

    return s[:-1]

  def generate_page_tables(self, first_level_table=None):
    if first_level_table is None:
      self.first_level_table = mmu.FirstLevelTable()
    else:
      self.first_level_table = first_level_table

    thread_section_entry = mmu.FirstLevelSectionEntry()
    mmu.set_memory_attributes(thread_section_entry, 'normal')
    mmu.set_access_permissions(thread_section_entry, 'rw', 'rw')
    thread_section_entry.ng = 1

    if self.thread_pa != align(self.thread_pa, 1024 * 1024):
      raise ValueError(
          'Thread memory physical address not 1MB aligned: {:010x}'.format(self.thread_pa))
    thread_section_entry.base_address = self.thread_pa >> 20

    self.first_level_table[self._THREAD_VA // (1024 * 1024)].section = thread_section_entry

    if self.peripherals:
      periph_table_entry = mmu.FirstLevelPageTableEntry()

      if self.peripheral_table_pa != align(self.peripheral_table_pa, 1024):
        raise ValueError('Peripheral table physical address not 1kB aligned: {:010x}'.format(
            self.peripheral_table_pa))
      periph_table_entry.base_address = self.peripheral_table_pa >> 10

      self.first_level_table[self._PERIPHERAL_VA // (1024 * 1024)].page_table = periph_table_entry

      self.periph_second_level_table = mmu.SecondLevelTable()

      self.generate_peripheral_layout()
      for periph in self.peripherals:
        if periph.start != align(periph.start, 4 * 1024):
          raise ValueError('Peripheral PA not 4kB aligned: {:#010x}'.format(periph.start))

        if periph.size != align(periph.size, 4 * 1024):
          raise ValueError('Peripheral size not 4kB aligned: {:#010x}'.format(periph.size))

        size_remaining = periph.size
        while size_remaining:
          if size_remaining >= 64 * 1024 and periph.start == align(periph.start, 64 * 1024):
            large_page = mmu.SecondLevelLargePageEntry()
            mmu.set_memory_attributes(large_page, 'device')
            mmu.set_access_permissions(large_page, 'rw', 'rw')
            large_page.ng = 1
            large_page.xn = 1

            large_page.base_address = (periph.start + (periph.size - size_remaining)) >> 16
            for i in range(16):
              address = periph.virtual_address + (periph.size - size_remaining) + i * 4 * 1024
              index = address % (1024 * 1024) // (4 * 1024)
              self.periph_second_level_table[index].large_page = large_page

            size_remaining -= 64 * 1024
          else:
            small_page = mmu.SecondLevelSmallPageEntry()
            mmu.set_memory_attributes(small_page, 'device')
            mmu.set_access_permissions(small_page, 'rw', 'rw')
            small_page.ng = 1
            small_page.xn = 1

            small_page.base_address = (periph.start + (periph.size - size_remaining)) >> 12
            address = periph.virtual_address + (periph.size - size_remaining)
            index = address % (1024 * 1024) // (4 * 1024)
            self.periph_second_level_table[index].small_page = small_page

            size_remaining -= 4 * 1024

    if self.mailboxes:
      mailbox_table_entry = mmu.FirstLevelPageTableEntry()

      if self.mailbox_table_pa != align(self.mailbox_table_pa, 1024):
        raise ValueError('Mailbox table physical address not 1kB aligned: {:#010x}'.format(
            self.mailbox_table_pa))
      mailbox_table_entry.base_address = self.mailbox_table_pa >> 10

      self.first_level_table[self._MAILBOX_VA // (1024 * 1024)].page_table = mailbox_table_entry

      self.mailbox_second_level_table = mmu.SecondLevelTable()

      size_remaining = self.get_mailbox_size()
      alignment = 4 * 1024 if size_remaining < 64 * 1024 else 64 * 1024

      if self.mailbox_pa != align(self.mailbox_pa, alignment):
        raise ValueError(
            'Mailbox PA is not {:d}kB aligned: {:#010x}'.format(alignment // 1024, self.mailbox_pa))

      page_index = 0
      while size_remaining:
        if size_remaining >= 64 * 1024:
          page = mmu.SecondLevelLargePageEntry()
          mmu.set_memory_attributes(page, 'normal')
          mmu.set_access_permissions(page, 'rw', 'rw')
          page.ng = 1
          page.xn = 1

          page.base_address = (self.mailbox_pa + page_index * 4 * 1024) >> 16

          for i in range(16):
            self.mailbox_second_level_table[page_index].large_page = page
            page_index += 1

          size_remaining -= 64 * 1024
        else:
          page = mmu.SecondLevelSmallPageEntry()
          mmu.set_memory_attributes(page, 'normal')
          mmu.set_access_permissions(page, 'rw', 'rw')
          page.ng = 1
          page.xn = 1

          page.base_address = (self.mailbox_pa + page_index * 4 * 1024) >> 12

          self.mailbox_second_level_table[page_index].small_page = page
          page_index += 1

          size_remaining -= 4 * 1024

  def add_mailbox(self, name, size):
    mailbox = Mailbox(self, name, size)
    self.mailboxes.append(mailbox)
    return mailbox

  def add_peripheral(self, peripheral):
    self.peripherals.append(copy.deepcopy(peripheral))

  def generate_peripheral_layout(self):
    address = self._PERIPHERAL_VA

    for periph in sorted(self.peripherals, key=lambda x: x.size, reverse=True):
      if periph.size > 4 * 1024:
        address = align(address, 64 * 1024)
      else:
        address = align(address, 4 * 1024)

      periph.virtual_address = address
      address += periph.size

    if address - self._PERIPHERAL_VA > 1024 * 1024:
      raise ValueError(
          'Peripherals total size exceeds 1MB: {:d}'.format(address - self._PERIPHERAL_VA))

  def generate_mailbox_layout(self):
    # Use the fewest number of 64kB blocks while avoiding crossing boundaries.
    offset = 0
    mailboxes = sorted(self.mailboxes, key=lambda x: x.size, reverse=True)

    while mailboxes:
      placed = False
      for i in range(len(mailboxes)):
        if (mailboxes[i].size > 64 * 1024
            or offset % (64 * 1024) + mailboxes[i].size - 1 < 64 * 1024):
          mailboxes[i].address_offset = offset
          offset += mailboxes[i].size
          mailboxes.pop(i)
          placed = True
          break

      if not placed:
        offset = (offset // (64 * 1024) + 1) * (64 * 1024)

  def get_mailbox_size(self):
    if not self.mailboxes:
      return None

    if any(x.address_offset is None for x in self.mailboxes):
      raise ValueError('Mailbox layout not yet generated.  Call generate_mailbox_layout()')

    last_mailbox = sorted(self.mailboxes, key=lambda x: x.address_offset)[-1]
    actual_size = last_mailbox.address_offset + last_mailbox.size

    if actual_size % (64 * 1024) <= 4 * 1024:
      return actual_size // (64 * 1024) * 64 * 1024 + 4 * 1024

    return ((actual_size - 1) // (64 * 1024) + 1) * 64 * 1024

  def get_thread_memory_size(self):
    return 1024 * 1024


class Faos:
  _SDRAM_ADDR = 0x80000000

  def __init__(self):
    self.threads = []
    self.mailbox_pa = None

  def __str__(self):
    indent = '  '
    s = ''
    s += 'FaOS Kernel:\n'
    s += '{:s}Mailbox PA: {:s}\n'.format(indent, none_or(self.mailbox_pa, '{:#010x}'))

    s += '{:s}Threads:{:s}\n'.format(indent, ' None' if not self.threads else '')
    for thread in self.threads:
      s += '{:s}\n'.format(textwrap.indent(str(thread), 2 * indent))

    return s[:-1]

  def add_thread(self, thread):
    self.threads.append(thread)

  def assign_memory(self):
    address = self._SDRAM_ADDR

    # Thread memory.
    for thread in sorted(self.threads, key=lambda x: x.get_thread_memory_size(), reverse=True):
      size = thread.get_thread_memory_size()

      if size > 1024 * 1024:
        address = align(address, 16 * 1024 * 1024)
      else:
        address = align(address, 1024 * 1024)

      thread.thread_pa = address
      address += size

    # Maibox memory.
    address = align(address, 1024 * 1024)
    self.mailbox_pa = address  # 1MB chunk.

    for thread in self.threads:
      thread.generate_mailbox_layout()

    mailbox_threads = (x for x in self.threads if x.get_mailbox_size())
    for thread in sorted(mailbox_threads, key=lambda x: x.get_mailbox_size(), reverse=True):
      size = thread.get_mailbox_size()

      if size > 4 * 1024:
        address = align(address, 64 * 1024)
      else:
        address = align(address, 4 * 1024)

      thread.mailbox_pa = address
      address += size

    if address - self.mailbox_pa > 1024 * 1024:
      raise ValueError('Mailbox memory exceeds 1MB: {:d}'.format(address - self.mailbox_pa))

    address = align(address, 1024 * 1024)

    for thread in self.threads:
      thread.first_table_pa = address
      address += 16 * 1024

    for thread in self.threads:
      thread.peripheral_table_pa = address
      address += 1024
      thread.mailbox_table_pa = address
      address += 1024

    address = align(address, 1024 * 1024)

    # Kernel memory (1MB).
    self.kernel_pa = address
    address += 1024 * 1024

    if address - self._SDRAM_ADDR > 512 * 1024 * 1024:
      raise ValueError('Memory usage exceeds 512MB: {:d}'.format(address - self._SDRAM_ADDR))


class Mailbox:
  def __init__(self, rx_thread, name, size):
    self.rx_thread = rx_thread
    self.name = name
    self.size = size

    self.address_offset = None
    self.tx_threads = []

  def add_tx_thread(self, thread):
    self.tx_threads.append(thread)

  def __str__(self):
    indent = '  '
    s = ''
    s += 'Mailbox: {:s} ({:d}kB)\n'.format(self.name, self.size // 1024)

    offset = 'None' if self.address_offset is None else '{:#010x}'.format(self.address_offset)
    s += '{:s}Offset: {:s}\n'.format(indent, offset)

    s += '{:s}RX Thread: {:s}\n'.format(indent, self.rx_thread.name)

    s += '{:s}TX Threads:{:s}\n'.format(indent, ' None' if not self.tx_threads else '')
    for thread in self.tx_threads:
      s += '{:s}{:s}\n'.format(2 * indent, thread.name)

    return s[:-1]


def main():
  cpu = peripherals.Cpu(_XML_FILE, _CORE)

  uart = Thread('Uart', 2)
  uart.add_peripheral(cpu.get_peripheral('UART0'))
  uart.add_mailbox('Input', 1024)

  logger = Thread('Logger', 3)
  logger.add_peripheral(cpu.get_peripheral('UART0'))
  logger.add_mailbox('Notes', 3 * 1024)
  logger.add_mailbox('Errors', 13 * 1024)
  warning_mailbox = logger.add_mailbox('Warnings', 3 * 1024)

  talker = Thread('Talker', 4)

  warning_mailbox.add_tx_thread(uart)
  warning_mailbox.add_tx_thread(talker)

  faos = Faos()

  faos.add_thread(uart)
  faos.add_thread(logger)
  faos.add_thread(talker)

  faos.assign_memory()
  logger.generate_page_tables()


if __name__ == '__main__':
  main()
