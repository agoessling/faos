.altmacro
.syntax	unified

// Macros for wrapping functions and variables.  These require the use of .done
// after the last function defined in a function (typically at the end of a
// file).  The basic concept is that the .done macro is constantly redefined to
// include include the .size directive for the last defined function.

// Empty .done.
.macro .done
.endm

// Redefine .done as empty.
.macro .emptydone
  .purgem .done
  .macro .done
  .endm
.endm

// Redefine .done to provide size for "label".
.macro .sizedone label
  .purgem .done
  .macro .done
    .size \label&, . - \label&
    .emptydone
  .endm
.endm

// Define "label" as function and defines .done to set size of "label".
.macro .function label
  .done
  .type \label&, %function
\label&:
  .sizedone \label&
.endm

// Define "label" as variable and defines .done to set size of "label".
.macro .variable label
  .done
  .type \label&, %object
\label&:
  .sizedone \label&
.endm

// Special section to be placed at beginning of image.
.section .text._startup

// ROM bootloader uses ARM instructions.
.arm

.global _startup
.function _startup
  cpsid afi   // Disable all interrupts.

  // Setup interrupt vector table.
  ldr r0, =_vectors
  mcr p15, 0, r0, c12, c0, 0  // Set vector base (TRM 3.2.68).

  // Initialize stack pointer.
  ldr r0, =_stack_top
  mov sp, r0

  // Enable NEON and VFP.
  mrc p15, 0, r0, c1, c0, 2  // Read coprocessor access register (TRM 3.2.27).
  orr r0, r0, #0x00F00000  // Privileged and user mode access to CP10 and CP11.
  mcr p15, 0, r0, c1, c0, 2  // Write coprocessor access register (TRM 3.2.27).
  isb  // Memory barrier required to clear pipeline.
  mov r0, #0x40000000  // Enable floating point (TRM 13.4.3).
  vmsr FPEXC, r0

  cpsie a   // Enable imprecise data aborts.

  bl _zero_bss  // Zero .bss
  bl Main  // Branch to Main().
  bl _idle  // If Main() returns idle.

// Infinite wait for interrupt loop.
.function _idle
  wfi
  b _idle

.function _zero_bss
  ldr r0, =_bss_start
  ldr r1, =_bss_end
  mov r2, #0

  // Check for empty .bss
  cmp r0, r1
  bxeq lr

zero_loop:
  strb r2, [r0], #1
  cmp r0, r1
  bne zero_loop

  bx lr

.variable _vectors
  b _exception_reset
  b _exception_undefine_instruction
  b _exception_software
  b _exception_abort_prefetch
  b _exception_abort_data
  b .   // Reserved.
  b _exception_irq
  b .   // FIQ isn't available on GP devices.

.function _exception_reset
  b _startup

.function _exception_undefine_instruction
  b .

.function _exception_software
  b .

.function _exception_abort_prefetch
  b .

.function _exception_abort_data
  b .

.function _exception_irq
  b .

.done
