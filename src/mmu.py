import ctypes

# Definitions from ARM DDI 0406C B3.5

class FirstLevelInvalidEntry(ctypes.LittleEndianStructure):
  _fields_ = [
      ('entry_type', ctypes.c_uint32, 2),
      ('ignored', ctypes.c_uint32, 30)]

  def __init__(self):
    super().__init__(0,0)

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
    super().__init__(entry_type=1, sbz=0, implementation_defined=0, **kwargs)

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
    super().__init__(entry_type=2, implementation_defined=0, super_section=0, **kwargs)

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
    super().__init__(0,0)

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
