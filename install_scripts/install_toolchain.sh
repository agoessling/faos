#!/bin/bash

# Exit on all errors.
set -e

# Project root.
ROOT_PATH=`realpath $0 | xargs dirname`
ROOT_PATH=`realpath $ROOT_PATH/..`

RED="\033[0;31m"
GREEN="\033[0;32m"
NC="\033[0m"

print_red() {
  echo -e ${RED}$1${NC}
}

print_green() {
  echo -e ${GREEN}$1${NC}
}

echo_usage() {
  echo "Usage: install_toolchain.sh [install uninstall] [bazel ccs usb_boot]"
}

main() {
  if [[ "$1" == "--help" || "$1" == "-h" ]]; then
    echo_usage
  elif [ "$1" == "uninstall" ]; then
    if [ "$2" == "bazel" ]; then
      uninstall_bazel
    elif [ "$2" == "ccs" ]; then
      uninstall_ccs
    elif [ "$2" == "usb_boot" ]; then
      uninstall_usb_boot
    elif [ "$2" == "" ]; then
      uninstall
    else
      print_red "Unknown argument: $2"
      echo_usage
      fail_exit
    fi
  elif [ "$1" == "install" ]; then
    if [ "$2" == "bazel" ]; then
      install_bazel
    elif [ "$2" == "ccs" ]; then
      install_ccs
    elif [ "$2" == "usb_boot" ]; then
      install_usb_boot
    elif [ "$2" == "" ]; then
      install
    else
      print_red "Unknown argument: $2"
      echo_usage
      fail_exit
    fi
  else
    print_red "Unknown argument: $1"
    echo_usage
    fail_exit
  fi

  cleanup
  exit 0
}

fail_exit() {
  cleanup
  exit 1
}

uninstall() {
  uninstall_bazel
  uninstall_ccs
  uninstall_usb_boot
}

# Bazel.
uninstall_bazel() {
  print_green "Uninstalling Bazel."
  sudo apt -y remove bazel
}

# TI CCS.
uninstall_ccs() {
  print_green "Uninstalling CCS."
  if [ -f "$ROOT_PATH/opt/ccs/ccs/install_scripts/uninstall_drivers.sh" ]; then
    sudo "$ROOT_PATH/opt/ccs/ccs/install_scripts/uninstall_drivers.sh"
  fi
  rm -rf "$ROOT_PATH/opt/ccs"
}

# USB network booting.
uninstall_usb_boot() {
  print_green "Uninstalling USB BOOT."

  sudo rm -f /etc/netplan/99-usb-boot.yaml
  sudo netplan apply

  sudo rm -f /etc/udev/rules.d/99-usb-boot.rules
  sudo udevadm control --reload-rules
  sudo udevadm trigger
}

install() {
  install_bazel
  install_ccs
  install_usb_boot
}

# Bazel.
install_bazel() {
  print_green "Installing Bazel."
  sudo apt -y install curl
  curl https://bazel.build/bazel-release.pub.gpg | sudo apt-key add -
  echo "deb [arch=amd64] https://storage.googleapis.com/bazel-apt stable jdk1.8" | sudo tee /etc/apt/sources.list.d/bazel.list
  sudo apt update && sudo apt -y install bazel
}

# TI CCS.
install_ccs() {
  print_green "Installing CCS."
  sudo apt install -y libc6:i386 libusb-0.1-4 libgconf-2-4 build-essential
  if [[ ! -d "$ROOT_PATH/opt/ccs" ]]; then
    mkdir -p "$ROOT_PATH/opt/ccs"
    wget https://software-dl.ti.com/ccs/esd/CCSv10/CCS_10_1_0/exports/CCS10.1.0.00010_linux-x64.tar.gz
    tar -xzf CCS10.1.0.00010_linux-x64.tar.gz
    print_green "Running CCS installer.  This may take a while.  Be patient..."
    CCS10.1.0.00010_linux-x64/ccs_setup_10.1.0.00010.run --mode unattended --prefix "$ROOT_PATH/opt/ccs/" --enable-components PF_SITARA
  fi
  sudo "$ROOT_PATH/opt/ccs/ccs/install_scripts/install_drivers.sh"
}

# USB network booting.
install_usb_boot() {
  print_green "Installing USB BOOT."
  sudo apt install -y dnsmasq

  # Setup udev to name TI RNDIS device to usb-boot.
  sudo cp "$ROOT_PATH/install_scripts/99-usb-boot.rules" /etc/udev/rules.d/
  sudo udevadm control --reload-rules
  sudo udevadm trigger

  # Setup netplan to give RNDIS usb device a static IP.
  sudo cp "$ROOT_PATH/install_scripts/99-usb-boot.yaml" /etc/netplan
  sudo netplan apply
}

cleanup() {
  # CCS.
  rm -rf CCS10.1.0.00010_linux-x64 CCS10.1.0.00010_linux-x64.tar.gz
}

main "$@"
