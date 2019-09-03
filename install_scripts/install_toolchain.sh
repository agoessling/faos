#!/bin/bash

# Exit on all errors.
set -e

# Project root.
ROOT_PATH=`realpath $0 | xargs dirname`
ROOT_PATH+="/.."

main() {
  if [[ "$1" == "--help" || "$1" == "-h" ]]; then
    echo "Usage: install_toolchain.sh [install uninstall] [ccs arm usb_boot] -- Default: install"
  elif [ "$1" == "uninstall" ]; then
    if [ "$2" == "ccs" ]; then
      uninstall_ccs
    elif [ "$2" == "arm" ]; then
      uninstall_arm
    elif [ "$2" == "usb_boot" ]; then
      uninstall_usb_boot
    elif [ "$2" == "" ]; then
      uninstall
    else
      echo "Unknown argument: $2"
      exit 1
    fi
  elif [ "$1" == "install" ]; then
    if [ "$2" == "ccs" ]; then
      install_ccs
    elif [ "$2" == "arm" ]; then
      install_arm
    elif [ "$2" == "usb_boot" ]; then
      install_usb_boot
    elif [ "$2" == "" ]; then
      install
    else
      echo "Unknown argument: $2"
      exit 1
    fi
  elif [ "$1" == "" ]; then
    install
  else
    echo "Unknown argument: $1"
    exit 1
  fi

  cleanup

  exit 0
}

uninstall() {
  uninstall_ccs
  uninstall_arm
  uninstall_usb_boot
}

# TI CCS.
uninstall_ccs() {
  echo Uninstalling CCS.
  if [ -f "$ROOT_PATH/opt/ccs/ccs/install_scripts/uninstall_drivers.sh" ]; then
    sudo "$ROOT_PATH/opt/ccs/ccs/install_scripts/uninstall_drivers.sh"
  fi
  rm -rf "$ROOT_PATH/opt/ccs"
}

# ARM toolchain.
uninstall_arm() {
  echo Uninstalling ARM.
  rm -rf "$ROOT_PATH/opt/gcc-arm-8.3-2019.03-x86_64-arm-eabi"
}

# USB network booting.
uninstall_usb_boot() {
  echo Uninstalling USB BOOT.
  rm -rf "$ROOT_PATH/opt/dnsmasq"
  sudo rm -f /etc/netplan/99-usb-boot.yaml
  sudo rm -f /etc/udev/rules.d/99-usb-boot.rules
  sudo netplan apply
}

install() {
  install_ccs
  install_arm
  install_usb_boot
}

# TI CCS.
install_ccs() {
  echo Installing CCS.
  sudo apt install -y libc6:i386 libusb-0.1-4 libgconf-2-4 build-essential
  if [[ ! -d "$ROOT_PATH/opt/ccs" ]]; then
    mkdir -p "$ROOT_PATH/opt/ccs"
    wget https://software-dl.ti.com/ccs/esd/CCSv9/CCS_9_1_0/exports/CCS9.1.0.00010_linux-x64.tar.gz
    tar -xzf CCS9.1.0.00010_linux-x64.tar.gz
    CCS9.1.0.00010_linux-x64/ccs_setup_linux64_9.1.0.00010.bin --prefix "$ROOT_PATH/opt/ccs/"

    patch -f -F 0 -p 5 -d "$ROOT_PATH/opt/ccs/ccs/ccs_base/common/targetdb" < "$ROOT_PATH/install_scripts/targetdb.patch"
  fi
  sudo "$ROOT_PATH/opt/ccs/ccs/install_scripts/install_drivers.sh"
}

# ARM toolchain.
install_arm() {
  echo Installing ARM.
  if [[ ! -d "$ROOT_PATH/opt/gcc-arm-8.3-2019.03-x86_64-arm-eabi" ]]; then
    wget -nv --show-progress https://developer.arm.com/-/media/Files/downloads/gnu-a/8.3-2019.03/binrel/gcc-arm-8.3-2019.03-x86_64-arm-eabi.tar.xz
    mkdir -p "$ROOT_PATH/opt"
    tar -xf gcc-arm-8.3-2019.03-x86_64-arm-eabi.tar.xz -C "$ROOT_PATH/opt"
  fi
}

# USB network booting.
install_usb_boot() {
  echo Installing USB BOOT.
  sudo apt install -y dnsmasq

  # Setup udev to name TI RNDIS device to usb-boot.
  sudo cp "$ROOT_PATH/install_scripts/99-usb-boot.rules" /etc/udev/rules.d/
  sudo udevadm control --reload-rules
  sudo udevadm trigger

  # Setup dnsmasq configuration file.
  # Template variables.  Need to match locations in Makefile.
  TFTP_ROOT=`realpath "$ROOT_PATH"`
  SPL_FILE="faos.bin"
  mkdir -p "$ROOT_PATH/opt/dnsmasq"
  # Template variables are prefixed with "%"
  cat "$ROOT_PATH/install_scripts/dnsmasq.conf.template" | sed "s|%TFTP_ROOT|$TFTP_ROOT|g; s|%SPL_FILE|$SPL_FILE|g" > "$ROOT_PATH/opt/dnsmasq/dnsmasq.conf"

  # Setup netplan to give RNDIS usb device a static IP.
  sudo cp "$ROOT_PATH/install_scripts/99-usb-boot.yaml" /etc/netplan
  sudo netplan apply
}

cleanup() {
  # CCS.
  rm -rf CCS9.1.0.00010_linux-x64 CCS9.1.0.00010_linux-x64.tar.gz
  # ARM.
  rm -f gcc-arm-8.3-2019.03-x86_64-arm-eabi.tar.xz
}

main "$@"
