sudo apt install libc6:i386 libusb-0.1-4 libgconf-2-4 build-essential
if [ ! -d ccs ]; then
  mkdir ccs
  wget https://software-dl.ti.com/ccs/esd/CCSv9/CCS_9_1_0/exports/CCS9.1.0.00010_linux-x64.tar.gz
  tar -xzf CCS9.1.0.00010_linux-x64.tar.gz
  CCS9.1.0.00010_linux-x64/ccs_setup_linux64_9.1.0.00010.bin --prefix ${PWD}/ccs/
  rm -rf CCS9.1.0.00010_linux-x64 CCS9.1.0.00010_linux-x64.tar.gz
fi
sudo ccs/ccs/install_scripts/install_drivers.sh
