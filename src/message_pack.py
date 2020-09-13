import abc
import textwrap
import types
import zlib


def _camel_to_snake(s):
  return ''.join(['_' + c.lower() if c.isupper() else c for c in s]).lstrip('_')


def _snake_to_camel(s):
  return ''.join(
      ['{:s}{:s}'.format(x[0].upper(), x[1:]) if len(x) > 1 else x for x in s.split('_')])


def _indent(s, level=1):
  return textwrap.indent(s, '  ' * level)


class _Field(abc.ABC):
  @classmethod
  @abc.abstractmethod
  def type_name(cls):
    pass

  @classmethod
  @abc.abstractmethod
  def packed_size(cls):
    pass

  @classmethod
  def contained_fields(cls):
    # Use dictionary as set to preserve order.
    return {cls: None}

  @classmethod
  def definition_hash(cls):
    return zlib.crc32(cls.type_name().encode())

  @classmethod
  def instantiation(cls, field_name):
    return '{:s} {:s};'.format(cls.type_name(), field_name);

  @classmethod
  def pack_function_name(cls):
    return 'Pack{:s}'.format(_snake_to_camel(cls.type_name()))

  @classmethod
  def unpack_function_name(cls):
    return 'Unpack{:s}'.format(_snake_to_camel(cls.type_name()))

  @classmethod
  def pack_prototype(cls, inline=False, const=True, return_type='void'):
    inline_str = 'static inline ' if inline else ''
    const_str = 'const ' if const else ''
    return '{:s}{:s} {:s}({:s}{:s} *data, uint8_t *buffer)'.format(inline_str,
                                                                   return_type,
                                                                   cls.pack_function_name(),
                                                                   const_str,
                                                                   cls.type_name())

  @classmethod
  def unpack_prototype(cls, inline=False, return_type='void'):
    inline_str = 'static inline ' if inline else ''
    return '{:s}{:s} {:s}(const uint8_t *buffer, {:s} *data)'.format(inline_str,
                                                                     return_type,
                                                                     cls.unpack_function_name(),
                                                                     cls.type_name())

  @classmethod
  def pack_instantiation(cls, data_ptr, buffer_ptr):
    return '{:s}({:s}, {:s});'.format(cls.pack_function_name(), data_ptr, buffer_ptr)

  @classmethod
  def unpack_instantiation(cls, buffer_ptr, data_ptr):
    return '{:s}({:s}, {:s});'.format(cls.unpack_function_name(), buffer_ptr, data_ptr)

  @classmethod
  def size_define(cls):
    return '#define {:s}_PACKED_SIZE {:d}'.format(
        _camel_to_snake(cls.type_name()).upper(), cls.packed_size())


class Array(_Field):
  _subclasses_ = {}

  def __init_subclass__(cls, **kwargs):
    super().__init_subclass__(**kwargs)

    if not hasattr(cls, '_field_cls_'):
      raise AttributeError('Array subclass must specify "_field_cls_".')

    if not hasattr(cls, '_length_'):
      raise AttributeError('Array subclass must specify "_length_".')

    field_cls = getattr(cls, '_field_cls_')
    length = getattr(cls, '_length_')
    subclass_key = (field_cls, length)

    if subclass_key in cls._subclasses_:
      raise AttributeError('{:s} already defines an array of {:s} length {:d}.'.format(
          cls._subclasses_[subclass_key].__name__, field_cls.__name__, length))

    cls._subclasses_[subclass_key] = cls

  @classmethod
  def type_name(cls):
    return cls.__name__

  @classmethod
  def contained_fields(cls):
    # Use dictionary as set to preserve order.
    # Insert children / leaves first to acheive the necessary reverse hierarchy.
    fields = {}
    fields.update(cls._field_cls_.contained_fields())
    fields[cls] = None
    return fields

  @classmethod
  def definition_hash(cls):
    hash_str = str((cls._field_cls_.definition_hash(), cls._length_))
    return super().definition_hash() ^ zlib.crc32(hash_str.encode())

  @classmethod
  def instantiation(cls, field_name):
    return '{:s} {:s}[{:d}];'.format(cls._field_cls_.type_name(), field_name, cls._length_);

  @classmethod
  def pack_instantiation(cls, data_ptr, buffer_ptr):
    s = ''
    s += 'for (int32_t i = 0; i < {:d}; ++i) {{\n'.format(cls._length_)
    indexed_data_ptr = '{:s} + i'.format(data_ptr)
    indexed_buffer_ptr = '{:s} + i * {:d}'.format(buffer_ptr, cls._field_cls_.packed_size())
    s += _indent(cls._field_cls_.pack_instantiation(indexed_data_ptr, indexed_buffer_ptr) + '\n')
    s += '}'

    return s

  @classmethod
  def unpack_instantiation(cls, buffer_ptr, data_ptr):
    s = ''
    s += 'for (int32_t i = 0; i < {:d}; ++i) {{\n'.format(cls._length_)
    indexed_data_ptr = '{:s} + i'.format(data_ptr)
    indexed_buffer_ptr = '{:s} + i * {:d}'.format(buffer_ptr, cls._field_cls_.packed_size())
    s += _indent(cls._field_cls_.unpack_instantiation(indexed_buffer_ptr, indexed_data_ptr) + '\n')
    s += '}'

    return s

  @classmethod
  def packed_size(cls):
    return cls._length_ * cls._field_cls_.packed_size()


def create_array(field_cls, length):
  subclass_key = (field_cls, length)
  if subclass_key in Array._subclasses_:
    return Array._subclasses_[subclass_key]

  return type('{:s}ArrayLength{:d}'.format(field_cls.__name__, length),
              (Array,),
              {'_field_cls_': field_cls, '_length_': length})


class Struct(_Field):
  def __init_subclass__(cls, **kwargs):
    super().__init_subclass__(**kwargs)

    fields = {}
    # Prepend fields from base classes then add current class's fields.
    for base_class in list(cls.__bases__) + [cls]:
      if not hasattr(base_class, '_fields_'):
        continue

      for field_name, field_cls in getattr(base_class, '_fields_').items():
        if field_name in fields:
          raise AttributeError('Multiple instances of "{:s}" found in "{:s}" Struct.'.format(
              field_name, cls.__name__))

        fields[field_name] = field_cls

    if not fields:
      raise AttributeError('Struct has no fields defined by "_fields_".')

    cls._fields_ = fields

  @classmethod
  def type_name(cls):
    return cls.__name__

  @classmethod
  def contained_fields(cls):
    # Use dictionary as set to preserve order.
    # Insert children / leaves first to acheive the necessary reverse hierarchy.
    fields = {}
    for c in cls._fields_.values():
      fields.update(c.contained_fields())

    fields[cls] = None

    return fields

  @classmethod
  def definition_hash(cls):
    hash_str = ','.join(str((field_name, field_cls.definition_hash()))
        for field_name, field_cls in cls._fields_.items())
    return super().definition_hash() ^ zlib.crc32(hash_str.encode())

  @classmethod
  def packed_size(cls):
    return sum([c.packed_size() for c in cls._fields_.values()])

  @classmethod
  def declaration(cls):
    s = ''
    s += 'typedef struct {\n'

    for field_name, field_cls in cls._fields_.items():
      s += _indent(field_cls.instantiation(field_name) + '\n')

    s += '}} {:s};'.format(cls.type_name())
    return s

  @classmethod
  def pack_function_body(cls):
    s = ''

    offset = 0
    for field_name, field_cls in cls._fields_.items():
      address_of = '&' if not issubclass(field_cls, Array) else ''
      data_ptr = '{:s}data->{:s}'.format(address_of, field_name)
      buffer_ptr = 'buffer + {:d}'.format(offset)
      s += field_cls.pack_instantiation(data_ptr, buffer_ptr) + '\n'
      offset += field_cls.packed_size()

    return s[:-1]

  @classmethod
  def pack_function(cls):
    return '{:s} {{\n{:s}\n}}'.format(cls.pack_prototype(inline=True),
                                      _indent(cls.pack_function_body()))

  @classmethod
  def unpack_function_body(cls):
    s = ''

    offset = 0
    for field_name, field_cls in cls._fields_.items():
      address_of = '&' if not issubclass(field_cls, Array) else ''
      data_ptr = '{:s}data->{:s}'.format(address_of, field_name)
      buffer_ptr = 'buffer + {:d}'.format(offset)
      s += field_cls.unpack_instantiation(buffer_ptr, data_ptr) + '\n'
      offset += field_cls.packed_size()

    return s[:-1]

  @classmethod
  def unpack_function(cls):
    return '{:s} {{\n{:s}\n}}'.format(cls.unpack_prototype(inline=True),
                                      _indent(cls.unpack_function_body()))


class _Primitive(_Field):
  _ALLOWED_BITS = [8, 16, 32, 64]

  def __init_subclass__(cls, bits, **kwargs):
    super().__init_subclass__(**kwargs)

    # Abstract subclass
    if bits is None:
      return

    allowed_bits = [8, 16, 32, 64]
    if bits not in cls._ALLOWED_BITS:
      raise AttributeError('Unknown bits "{}".  Choices {}.'.format(bits, cls._ALLOWED_BITS))

    cls._bits_ = bits

  @classmethod
  def definition_hash(cls):
    return super().definition_hash() ^ zlib.crc32(str(cls._bits_).encode())

  @classmethod
  def bits_required(cls, min_bits):
    try:
      return [x for x in cls._ALLOWED_BITS if x >= min_bits][0]
    except IndexError:
      raise IndexError('{:d} too large for allowed bits: {}.'.format(min_bits, cls._ALLOWED_BITS))

  @classmethod
  def packed_size(cls):
    return cls._bits_ // 8

  @classmethod
  def raw_type_name(cls):
    return 'uint{:d}_t'.format(cls._bits_)

  @classmethod
  def raw_data_extract(cls):
    return '{0:s} raw_data = ({0:s})*data;'.format(cls.raw_type_name())

  @classmethod
  def pack_function(cls):
    s = ''
    s += '{:s} {{\n'.format(cls.pack_prototype(inline=True))
    s += _indent(cls.raw_data_extract() + '\n')

    # Big-Endian pack.
    for i in range(cls.packed_size()):
      s += _indent('buffer[{:d}] = (uint8_t)(raw_data >> {:d});\n'.format(
          i, (cls.packed_size() - i - 1) * 8))

    s += '}'

    return s

  @classmethod
  def raw_data_insert(cls):
    return '*data = ({:s})raw_data;'.format(cls.type_name())

  @classmethod
  def unpack_function(cls):
    s = ''
    s += '{:s} {{\n'.format(cls.unpack_prototype(inline=True))
    s += _indent('{:s} raw_data = 0;\n'.format(cls.raw_type_name()))

    # Big-Endian unpack.
    for i in range(cls.packed_size()):
      s += _indent(
          'raw_data |= ({:s})buffer[{:d}] << {:d};\n'.format(
              cls.raw_type_name(), i, (cls.packed_size() - i - 1) * 8))

    s += _indent(cls.raw_data_insert() + '\n')
    s += '}'

    return s


class _Integer(_Primitive, bits=None):
  def __init_subclass__(cls, signed, **kwargs):
    super().__init_subclass__(**kwargs)

    if not isinstance(signed, bool):
      raise AttributeError('Unknown sign "{}".  Should be bool.'.format(signed))

    cls._signed_ = signed

  @classmethod
  def type_name(cls):
    signed = 'u' if not cls._signed_ else ''
    return '{:s}int{:d}_t'.format(signed, cls._bits_)


class Bool(_Primitive, bits=8):
  @classmethod
  def type_name(cls):
    return 'bool'


class Float(_Primitive, bits=32):
  @classmethod
  def type_name(cls):
    return 'float'


class Double(_Primitive, bits=64):
  @classmethod
  def type_name(cls):
    return 'double'


Uint8t = types.new_class('Uint8t', (_Integer,), {'signed': False, 'bits': 8})
Uint16t = types.new_class('Uint16t', (_Integer,), {'signed': False, 'bits': 16})
Uint32t = types.new_class('Uint32t', (_Integer,), {'signed': False, 'bits': 32})
Uint64t = types.new_class('Uint64t', (_Integer,), {'signed': False, 'bits': 64})

Int8t = types.new_class('Int8t', (_Integer,), {'signed': True, 'bits': 8})
Int16t = types.new_class('Int16t', (_Integer,), {'signed': True, 'bits': 16})
Int32t = types.new_class('Int32t', (_Integer,), {'signed': True, 'bits': 32})
Int64t = types.new_class('Int64t', (_Integer,), {'signed': True, 'bits': 64})


class Enum(_Primitive, bits=None):
  def __init_subclass__(cls, **kwargs):
    values = []
    # Prepend values from base classes then add current class's values.
    for base_class in list(cls.__bases__) + [cls]:
      if not hasattr(base_class, '_values_'):
        continue

      for value in getattr(base_class, '_values_'):
        if value in values:
          raise AttributeError('Multiple instances of "{:s}" found in "{:s}" Enum.'.format(
              value, cls.__name__))

        values.append('k{:s}{:s}'.format(cls.type_name(), value))

    if not values:
      raise AttributeError('Enum has no values defined by "_values_".')

    values.insert(0, 'k{:s}ForcedSigned'.format(cls.type_name()))
    values.append('kNum{:s}'.format(cls.type_name()))

    cls._values_ = values

    # Bits needs to be able to represent the number of enum values plus an extra bit for signedness.
    bits = cls.bits_required((len(values) - 2).bit_length() + 1)

    if 'bits' in kwargs:
      if kwargs['bits'] < bits:
        raise AttributeError('Too many Enum values ({:d}) for specified bits ({:d}).'.format(
            len(values), bits))
    else:
      kwargs['bits'] = bits

    super().__init_subclass__(**kwargs)

  @classmethod
  def type_name(cls):
    return cls.__name__

  @classmethod
  def definition_hash(cls):
    return super().definition_hash() ^ zlib.crc32(','.join(cls._values_).encode())

  @classmethod
  def declaration(cls):
    s = ''
    s += 'typedef enum {\n'

    for i, value in enumerate(cls._values_):
      assignment = ' = -1' if i == 0 else ''
      s += _indent(value + assignment + ',\n')

    s += '}} {:s};'.format(cls.type_name())
    return s

class Bitfield(_Primitive, bits=None):
  def __init_subclass__(cls, **kwargs):
    fields = {}
    # Prepend fields from base classes then add current class's fields.
    for base_class in list(cls.__bases__) + [cls]:
      if not hasattr(base_class, '_fields_'):
        continue

      for field_name, field_bits in getattr(base_class, '_fields_').items():
        if field_name in fields:
          raise AttributeError('Multiple instances of "{:s}" found in "{:s}" Bitfield.'.format(
              field_name, cls.__name__))

        fields[field_name] = field_bits

    if not fields:
      raise AttributeError('Bitfield has no fields defined by "_fields_".')

    cls._fields_ = fields

    bits = cls.bits_required(sum(fields.values()))

    super().__init_subclass__(bits=bits, **kwargs)

  @classmethod
  def type_name(cls):
    return cls.__name__

  @classmethod
  def definition_hash(cls):
    hash_str = ','.join(str(x) for x in cls._fields_.items())
    return super().definition_hash() ^ zlib.crc32(hash_str.encode())

  @classmethod
  def data_union(cls):
    s = ''
    s += 'union {\n'
    s += _indent('{:s} data;\n'.format(cls.type_name()))
    s += _indent('{:s} raw_data;\n'.format(cls.raw_type_name()))
    s += '} data_union;'

    return s

  @classmethod
  def raw_data_extract(cls):
    s = ''
    s += cls.data_union() + '\n\n'
    s += 'data_union.data = *data;\n'
    s += '{:s} raw_data = data_union.raw_data;\n'.format(cls.raw_type_name())

    return s

  @classmethod
  def raw_data_insert(cls):
    s = '\n'
    s += cls.data_union() + '\n\n'
    s += 'data_union.raw_data = raw_data;\n'
    s += '*data = data_union.data;'

    return s

  @classmethod
  def declaration(cls):
    raw_type = 'uint{:d}_t'.format(cls._bits_)

    s = ''
    s += 'typedef struct {\n'

    for field_name, field_bits in cls._fields_.items():
      s += _indent('{:s} {:s} : {:d};\n'.format(raw_type, field_name, field_bits))

    s += '}} {:s};'.format(cls.type_name())
    return s


class Header(Struct):
  _fields_ = {
      'uid': Uint32t,
      'len': Uint16t,
  }


class Message(Struct):
  _fields_ = {
      'header': Header,
  }

  _subclasses_ = []

  def __init_subclass__(cls, **kwargs):
    super().__init_subclass__(**kwargs)
    cls._subclasses_.append(cls)


  @classmethod
  def payload_size(cls):
    return cls.packed_size() - Header.packed_size()

  @classmethod
  def pack_prototype(cls):
    return super().pack_prototype(inline=False, const=False)

  @classmethod
  def unpack_prototype(cls):
    return super().unpack_prototype(inline=False, return_type='PackStatus')

  @classmethod
  def pack_function(cls):
    s = ''
    s += '{:s} {{\n'.format(cls.pack_prototype())
    s += _indent('data->header.uid = {:#010x};\n'.format(cls.definition_hash()))
    s += _indent('data->header.len = {:d};\n'.format(cls.payload_size()))
    s += '\n'
    s += _indent(super().pack_function_body()) + '\n'
    s += '}'

    return s

  @classmethod
  def unpack_function(cls):
    s = ''
    s += '{:s} {{\n'.format(cls.unpack_prototype())

    s += _indent('if (data->header.uid != {:#010x}) {{\n'.format(cls.definition_hash()))
    s += _indent('return kPackStatusUnknownUid;\n', level=2)
    s += _indent('}\n\n')

    s += _indent('if (data->header.len != {:d}) {{\n'.format(cls.payload_size()))
    s += _indent('return kPackStatusIncorrectLength;\n', level=2)
    s += _indent('}\n\n')

    s += _indent(super().unpack_function_body()) + '\n\n'

    s += _indent('return kPackStatusSuccess;\n')
    s += '}'

    return s


class PackStatus(Enum):
  _values_ = [
      'Success',
      'UnknownUid',
      'IncorrectLength',
  ]


def get_message_type():
  return type('MessageType',
              (Enum,),
              {'_values_': [cls.__name__ for cls in Message._subclasses_] + ['Unknown']})


def get_uid_array():
  s = ''
  s += 'static const uint32_t kMessageUids[{:d}] = {{\n'.format(len(Message._subclasses_))

  uid_str = ',\n'.join(('{:#010x}'.format(cls.definition_hash()) for cls in Message._subclasses_))
  s += _indent(uid_str)

  s += '\n};'

  return s


def get_message_type_array():
  s = ''
  s += 'static const MessageType kMessageTypes[{:d}] = {{\n'.format(len(Message._subclasses_))

  type_str = ',\n'.join(get_message_type()._values_[1:-2])
  s += _indent(type_str)

  s += '\n};'

  return s


def get_utility_functions():
  return '''\
static inline MessageType GetMessageTypeFromUid(uint32_t uid) {
  // Linear search.
  for (int32_t i = 0; i < sizeof(kMessageUids) / sizeof(kMessageUids[0]); ++i) {
    if (uid == kMessageUids[i]) {
      return kMessageTypes[i];
    }
  }
  return kMessageTypeUnknown;
}

MessageType InspectHeader(uint8_t *buffer) {
  Header header;
  UnpackHeader(buffer, &header);
  return GetMessageTypeFromUid(header.uid);
}'''


def get_header(guard='MESSAGE_PACK_H_'):
  s = ''
  s += '#ifndef {:s}\n'.format(guard)
  s += '#define {:s}\n'.format(guard)
  s += '\n'
  s += '#include <stdbool.h>\n'
  s += '#include <stdint.h>\n'
  s += '\n'

  s += get_message_type().declaration() + '\n\n'
  s += PackStatus.declaration() + '\n\n'

  fields = {}
  for cls in Message._subclasses_:
    fields.update(cls.contained_fields())

  for field in fields.keys():
    if hasattr(field, 'declaration'):
      s += field.declaration() + '\n\n'

  for cls in Message._subclasses_:
    s += cls.pack_prototype() + ';\n'
    s += cls.unpack_prototype() + ';\n'

  s += '\n'

  s += '#endif  // {:s}'.format(guard)
  return s


def get_library(header_path):
  s = ''
  s += '#include "{:s}"\n'.format(header_path)
  s += '\n'
  s += '#include <stdbool.h>\n'
  s += '#include <stdint.h>\n'
  s += '\n'

  fields = {}
  for cls in Message._subclasses_:
    fields.update(cls.contained_fields())

  functions = []
  for field in fields.keys():
    if hasattr(field, 'pack_function'):
      functions.append(field.pack_function())
    if hasattr(field, 'unpack_function'):
      functions.append(field.unpack_function())
  s += '\n\n'.join(functions)

  s += '\n\n'
  s += get_uid_array() + '\n\n'
  s += get_message_type_array() + '\n\n'
  s += get_utility_functions() + '\n\n'

  return s
