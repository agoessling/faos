#!/bin/bash

# Create place for build and debug tools.
mkdir -p opt

# Install Code Composer.
sudo apt install libc6:i386 libusb-0.1-4 libgconf-2-4 build-essential
if [ ! -d opt/ccs ]; then
  mkdir ccs
  wget https://software-dl.ti.com/ccs/esd/CCSv9/CCS_9_1_0/exports/CCS9.1.0.00010_linux-x64.tar.gz
  tar -xzf CCS9.1.0.00010_linux-x64.tar.gz
  CCS9.1.0.00010_linux-x64/ccs_setup_linux64_9.1.0.00010.bin --prefix ${PWD}/opt/ccs/
  rm -rf CCS9.1.0.00010_linux-x64 CCS9.1.0.00010_linux-x64.tar.gz
fi
sudo opt/ccs/ccs/install_scripts/install_drivers.sh

# Install ARM GCC toolchain.
if [ ! -d opt/gcc-arm-8.3-2019.03-x86_64-arm-eabi ]; then
  wget -nv --show-progress https://developer.arm.com/-/media/Files/downloads/gnu-a/8.3-2019.03/binrel/gcc-arm-8.3-2019.03-x86_64-arm-eabi.tar.xz
  tar -xf gcc-arm-8.3-2019.03-x86_64-arm-eabi.tar.xz -C opt
  rm -rf gcc-arm-8.3-2019.03-x86_64-arm-eabi.tar.xz
fi
