import ctypes

def print_struct(struct):
  indent = '  '
  s = ''
  s += '{:s}:'.format(type(struct).__name__)
  for name, *_ in struct._fields_:
    s += '\n{:s}{:s}: {}'.format(indent, name, getattr(struct, name))
  print(s)

def table_to_c_array(name, table, indent=''):
  # Determine number of entries (four bytes) can fit on a line.
  line_wrap = 100
  char_per_byte = 6
  byte_per_entry = 4
  bytes_per_line = (line_wrap - 1 - len(indent)) // char_per_byte // byte_per_entry * byte_per_entry

  table_bytes = bytes(table)
  s = '{:s}uint8_t {:s}[{:d}] = {{'.format(indent, name, len(table_bytes))

  for i in range(0, len(table_bytes), bytes_per_line):
    line_bytes = table_bytes[i:i + bytes_per_line]
    bytes_str = ', '.join(['{:#04x}'.format(x) for x in line_bytes])
    s += '\n{:s}  {:s},'.format(indent, bytes_str)

  s += '\n{:s}}};'.format(indent)
  return s

def set_access_permissions(entry, priv_access, nonpriv_access):
  '''Set access permissions of table entry.

  Mapping based on Table B3-8 in ARM DDI 0406C.

  Args:
    entry: A table entry.
    priv_access: A string representing priviledged permissions.
        '': no access, 'r': read, 'rw': read/write
    nonpriv_access: A string representing non-priviledged permissions.
  '''
  mapping = {
      ('', ''): (0, 0),
      ('rw', ''): (0, 1),
      ('rw', 'r'): (0, 2),
      ('rw', 'rw'): (0, 3),
      ('r', ''): (1, 1),
      ('r', 'r'): (1, 3)}

  if (priv_access, nonpriv_access) not in mapping:
    raise KeyError('({}, {}) not in valid combinations: {}'.format(
        priv_access, nonpriv_access, mapping.keys()))

  ap2, ap10 = mapping[(priv_access, nonpriv_access)]
  entry.ap2 = ap2
  entry.ap10 = ap10

def set_memory_attributes(entry, attribute):
  '''Set memory attributes of table entry.

  Mapping based on Table B3-10 in ARM DDI 0406C.  Normal memory is currently always set to
  non-shareable outer and inner write-back, write-allocate.

  Args:
    entry: A table entry.
    attribute: A string representing memory attribute. 'ordered', 'device', 'normal'
  '''
  if attribute == 'ordered':
    entry.tex = 0
    entry.c = 0
    entry.b = 0
    entry.s = 1  # Not strictly necessary as ordered is always shareable.
  elif attribute == 'device':
    entry.tex = 0
    entry.c = 0
    entry.b = 1
    entry.s = 1  # Not strictly necessary as shareable device is always shareable.
  elif attribute == 'normal':
    entry.tex = 1
    entry.c = 1
    entry.b = 1
    entry.s = 0
  else:
    valid_attributes = ['ordered', 'device', 'normal']
    raise KeyError('{} not a valid attribute: {}'.format(attribute, valid_attributes))


# Definitions from ARM DDI 0406C B3.5

class FirstLevelInvalidEntry(ctypes.LittleEndianStructure):
  _fields_ = [
      ('entry_type', ctypes.c_uint32, 2),
      ('ignored', ctypes.c_uint32, 30)]

  def __init__(self):
    super().__init__(entry_type=0, ignored=0)

assert(ctypes.sizeof(FirstLevelInvalidEntry) == 4)

class FirstLevelPageTableEntry(ctypes.LittleEndianStructure):
  _fields_ = [
      ('entry_type', ctypes.c_uint32, 2),
      ('pxn', ctypes.c_uint32, 1),
      ('ns', ctypes.c_uint32, 1),
      ('sbz', ctypes.c_uint32, 1),
      ('domain', ctypes.c_uint32, 4),
      ('implementation_defined', ctypes.c_uint32, 1),
      ('base_address', ctypes.c_uint32, 22)]

  def __init__(self, **kwargs):
    super().__init__(entry_type=1, sbz=0, domain=0, implementation_defined=0, **kwargs)

assert(ctypes.sizeof(FirstLevelPageTableEntry) == 4)

class FirstLevelSectionEntry(ctypes.LittleEndianStructure):
  _fields_ = [
      ('entry_type', ctypes.c_uint32, 2),
      ('b', ctypes.c_uint32, 1),
      ('c', ctypes.c_uint32, 1),
      ('xn', ctypes.c_uint32, 1),
      ('domain', ctypes.c_uint32, 4),
      ('implementation_defined', ctypes.c_uint32, 1),
      ('ap10', ctypes.c_uint32, 2),
      ('tex', ctypes.c_uint32, 3),
      ('ap2', ctypes.c_uint32, 1),
      ('s', ctypes.c_uint32, 1),
      ('ng', ctypes.c_uint32, 1),
      ('super_section', ctypes.c_uint32, 1),
      ('ns', ctypes.c_uint32, 1),
      ('base_address', ctypes.c_uint32, 12)]

  def __init__(self, **kwargs):
    super().__init__(entry_type=2, domain=0, implementation_defined=0, super_section=0, **kwargs)

assert(ctypes.sizeof(FirstLevelSectionEntry) == 4)

class FirstLevelSuperSectionEntry(ctypes.LittleEndianStructure):
  _fields_ = [
      ('entry_type', ctypes.c_uint32, 2),
      ('b', ctypes.c_uint32, 1),
      ('c', ctypes.c_uint32, 1),
      ('xn', ctypes.c_uint32, 1),
      ('extended_base_address_39_36', ctypes.c_uint32, 4),
      ('implementation_defined', ctypes.c_uint32, 1),
      ('ap10', ctypes.c_uint32, 2),
      ('tex', ctypes.c_uint32, 3),
      ('ap2', ctypes.c_uint32, 1),
      ('s', ctypes.c_uint32, 1),
      ('ng', ctypes.c_uint32, 1),
      ('super_section', ctypes.c_uint32, 1),
      ('ns', ctypes.c_uint32, 1),
      ('extended_base_address_35_32', ctypes.c_uint32, 4),
      ('base_address', ctypes.c_uint32, 8)]

  def __init__(self, **kwargs):
    super().__init__(entry_type=2, extended_base_address_39_36=0, implementation_defined=0,
                     super_section=1, extended_base_address_35_32=0, **kwargs)

assert(ctypes.sizeof(FirstLevelSuperSectionEntry) == 4)

class FirstLevelEntry(ctypes.Union):
  _fields_ = [
      ('invalid', FirstLevelInvalidEntry),
      ('page_table', FirstLevelPageTableEntry),
      ('section', FirstLevelSectionEntry),
      ('super_section', FirstLevelSuperSectionEntry)]

assert(ctypes.sizeof(FirstLevelEntry) == 4)

FirstLevelTable = FirstLevelEntry * 4096

class SecondLevelInvalidEntry(ctypes.LittleEndianStructure):
  _fields_ = [
      ('entry_type', ctypes.c_uint32, 2),
      ('ignored', ctypes.c_uint32, 30)]

  def __init__(self):
    super().__init__(entry_type=0, ignored=0)

assert(ctypes.sizeof(SecondLevelInvalidEntry) == 4)

class SecondLevelLargePageEntry(ctypes.LittleEndianStructure):
  _fields_ = [
      ('entry_type', ctypes.c_uint32, 2),
      ('b', ctypes.c_uint32, 1),
      ('c', ctypes.c_uint32, 1),
      ('ap10', ctypes.c_uint32, 2),
      ('sbz', ctypes.c_uint32, 3),
      ('ap2', ctypes.c_uint32, 1),
      ('s', ctypes.c_uint32, 1),
      ('ng', ctypes.c_uint32, 1),
      ('tex', ctypes.c_uint32, 3),
      ('xn', ctypes.c_uint32, 1),
      ('base_address', ctypes.c_uint32, 16)]

  def __init__(self, **kwargs):
    super().__init__(entry_type=1, sbz=0, **kwargs)

assert(ctypes.sizeof(SecondLevelLargePageEntry) == 4)

class SecondLevelSmallPageEntry(ctypes.LittleEndianStructure):
  _fields_ = [
      ('xn', ctypes.c_uint32, 1),
      ('entry_type', ctypes.c_uint32, 1),
      ('b', ctypes.c_uint32, 1),
      ('c', ctypes.c_uint32, 1),
      ('ap10', ctypes.c_uint32, 2),
      ('tex', ctypes.c_uint32, 3),
      ('ap2', ctypes.c_uint32, 1),
      ('s', ctypes.c_uint32, 1),
      ('ng', ctypes.c_uint32, 1),
      ('base_address', ctypes.c_uint32, 20)]

  def __init__(self, **kwargs):
    super().__init__(entry_type=1, **kwargs)

assert(ctypes.sizeof(SecondLevelSmallPageEntry) == 4)

class SecondLevelEntry(ctypes.Union):
  _fields_ = [
      ('invalid', SecondLevelInvalidEntry),
      ('large_page', SecondLevelLargePageEntry),
      ('small_page', SecondLevelSmallPageEntry)]

assert(ctypes.sizeof(SecondLevelEntry) == 4)

SecondLevelTable = SecondLevelEntry * 256
