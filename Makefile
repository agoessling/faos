APP = faos

SRCDIR = src
OBJDIR = obj
AUTOGEN = ${SRCDIR}/autogen
$(shell mkdir -p ${OBJDIR})
$(shell mkdir -p ${AUTOGEN})

ASSRCS := $(shell find ${SRCDIR} -name '*.s')
ASOBJS := $(patsubst ${SRCDIR}/%.s,${OBJDIR}/%.o,${ASSRCS})

CSRCS := $(shell find ${SRCDIR} -name '*.c')
CDEPS := $(shell find ${SRCDIR} -name '*.h')
COBJS := $(patsubst ${SRCDIR}/%.c,${OBJDIR}/%.o,${CSRCS})

LDSCRIPT = ${SRCDIR}/linker_script.ld

DEVICE_FILE = targetdb/devices/AM3358.xml

TOOLCHAIN_PATH = opt/gcc-arm-8.3-2019.03-x86_64-arm-eabi/bin
GCC = ${TOOLCHAIN_PATH}/arm-eabi-gcc
OBJCOPY = ${TOOLCHAIN_PATH}/arm-eabi-objcopy

TARGETFLAGS = -mcpu=cortex-a8 -mfloat-abi=hard -mfpu=neon-vfpv3

COMMONFLAGS = ${TARGETFLAGS} -O2 -Werror -Wall -Wextra -Wsign-conversion -Wfloat-conversion
COMMONFLAGS += -Wmissing-prototypes -Wstrict-prototypes -g

ASFLAGS = ${COMMONFLAGS}
CFLAGS = ${COMMONFLAGS}
LDFLAGS = ${COMMONFLAGS} -nostartfiles

.PHONY: all
all: ${APP}.elf ${APP}.bin

${APP}.elf: ${ASOBJS} ${COBJS} ${LDSCRIPT}
	${GCC} ${LDFLAGS} -T ${LDSCRIPT} ${ASOBJS} ${COBJS} -o $@

${APP}.bin: ${APP}.elf
	${OBJCOPY} -O binary $< $@

${OBJDIR}/%.o: ${SRCDIR}/%.s
	${GCC} ${ASFLAGS} -c $< -o $@

${OBJDIR}/%.o: ${SRCDIR}/%.c ${CDEPS} ${AUTOGEN}/reg_def.h
	${GCC} ${CFLAGS} -c $< -o $@

${AUTOGEN}/reg_def.h: ${SRCDIR}/generate_reg_def.py
	python3 ${SRCDIR}/generate_reg_def.py ${DEVICE_FILE} ${AUTOGEN}/reg_def.h

.PHONY: clean
clean:
	rm -f ${ASOBJS} ${COBJS} ${AUTOGEN}/*
	rm -f ${APP}.elf ${APP}.bin

.PHONY: usb_boot
usb_boot: ${APP}.bin
	sudo dnsmasq -d -C opt/dnsmasq/dnsmasq.conf

print-%:
	@echo '$*=$($*)'
