#!/usr/bin/env python3

import argparse

from src import peripherals

def main():
  parser = argparse.ArgumentParser(description='Create register definition from TI XML.')
  parser.add_argument('infile', help='TI XML file.')
  parser.add_argument('outfile', help='Output header file.')
  args = parser.parse_args()

  cpu = peripherals.Cpu(args.infile, 'CortexA8')

  with open(args.outfile, 'w') as f:
    f.write('#ifndef REG_DEF_H_\n')
    f.write('#define REG_DEF_H_\n')
    f.write('\n')
    f.write('#include <stdint.h>\n')
    f.write('\n')
    f.write(cpu.to_file())
    f.write('\n')
    f.write('\n')
    f.write('#endif  // REG_DEF_H_\n')

if __name__ == '__main__':
  main()
