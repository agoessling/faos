#!/usr/env python3

import src.message_pack as mp


class Errors(mp.Bitfield):
  _fields_ = {
      'over_voltage': 1,
      'over_temp': 1,
      'num_glitches': 3,
      'extra': 3,
  }


class CommandType(mp.Enum):
  _values_ = [
      'Boot',
      'Status',
  ]


class MyArray(mp.Array):
  _field_cls_ = mp.Uint8t
  _length_ = 11

AnotherArray = mp.create_array(mp.Uint8t, 11)

class Bootload(mp.Message):
  _fields_ = {
      'command': CommandType,
      'length': mp.Uint16t,
      'error': Errors,
  }


class TestMsg(Bootload):
  _fields_ = {
      'tester': mp.Int64t,
      'first_array': MyArray,
      'second_array': AnotherArray,
      'data_array1': mp.create_array(mp.Int16t, 10),
      'data_array2': mp.create_array(mp.Uint8t, 10),
      'bootload': Bootload,
  }


def main():
  with open('/home/agoessling/message_pack.c', 'w') as f:
    f.write(mp.get_library('message_pack.h'))

  with open('/home/agoessling/message_pack.h', 'w') as f:
    f.write(mp.get_header())

if __name__ == '__main__':
  main()
