// Special section to be placed at beginning of image.
.section .text._startup

// ROM bootloader uses ARM instructions.
.arm

.global _startup
_startup:
  cpsid afi   // Disable all interrupts.

  ldr r0, =_vectors
  mcr p15, 0, r0, c12, c0, 0  // Set vector base (TRM 3.2.68).

  cpsie a   // Enable imprecise data aborts.

  bl Main  // Branch to Main().
  bl _idle  // If Main() returns idle.

// Infinite wait for interrupt loop.
_idle:
  wfi
  b idle

_vectors:
  b _exception_reset
  b _exception_undefine_instruction
  b _exception_software
  b _exception_abort_prefetch
  b _exception_abort_data
  b .   // Reserved.
  b _exception_irq
  b .   // FIQ isn't available on GP devices.

_exception_reset:
  b _startup

_exception_undefine_instruction:
  b .

_exception_software:
  b .

_exception_abort_prefetch:
  b .

_exception_abort_data:
  b .

_exception_irq:
  b .
