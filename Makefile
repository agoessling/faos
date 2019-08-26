APP = faos

SRCDIR = src
OBJDIR = obj
$(shell mkdir -p ${OBJDIR})

ASSRCS := $(shell find ${SRCDIR} -name '*.s')
ASOBJS := $(patsubst ${SRCDIR}/%.s,${OBJDIR}/%.o,${ASSRCS})

CSRCS := $(shell find ${SRCDIR} -name '*.c')
CDEPS := $(shell find ${SRCDIR} -name '*.h')
COBJS := $(patsubst ${SRCDIR}/%.c,${OBJDIR}/%.o,${CSRCS})

LDSCRIPT = ${SRCDIR}/linker_script.ld

TOOLCHAIN_PATH = opt/gcc-arm-8.3-2019.03-x86_64-arm-eabi/bin
GCC = ${TOOLCHAIN_PATH}/arm-eabi-gcc
OBJCOPY = ${TOOLCHAIN_PATH}/arm-eabi-objcopy

TARGETFLAGS = -mcpu=cortex-a8

ASFLAGS = ${TARGETFLAGS} -Wall -Wextra -g
CFLAGS = ${TARGETFLAGS} -Wall -Wextra -g
LDFLAGS = ${TARGETFLAGS} -nostartfiles -g

.PHONY: all
all: ${APP}.elf ${APP}.bin

${APP}.elf: ${ASOBJS} ${COBJS} ${LDSCRIPT}
	${GCC} ${LDFLAGS} -T ${LDSCRIPT} ${ASOBJS} ${COBJS} -o $@

${APP}.bin: ${APP}.elf
	${OBJCOPY} -O binary $< $@

${OBJDIR}/%.o: ${SRCDIR}/%.s
	${GCC} ${ASFLAGS} -c $< -o $@

${OBJDIR}/%.o: ${SRCDIR}/%.c ${CDEPS}
	${GCC} ${CFLAGS} -c $< -o $@

.PHONY: clean
clean:
	rm -f ${ASOBJS} ${COBJS}
	rm -f ${APP}.elf ${APP}.bin

.PHONY: usb_boot
usb_boot:
	sudo dnsmasq -d -C opt/dnsmasq/dnsmasq.conf

print-%:
	@echo '$*=$($*)'
