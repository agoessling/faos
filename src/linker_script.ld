MEMORY {
  a8ram (xrw) : org = 0x402F0400, len = 63k
}

PHDRS {
  image PT_LOAD;
}

ENTRY(_startup)

_stack_top = ORIGIN(a8ram) + LENGTH(a8ram);

SECTIONS {
  .text : ALIGN(4) {
    *(.text._startup)
    *(.text)
    *(.text.*)
  } >a8ram :image

  .rodata : ALIGN(4) {
    *(.rodata)
    *(.rodata.*)
  } >a8ram :image

  .data : ALIGN(4) {
    *(.data)
    *(.data.*)
  } >a8ram :image

  .bss (NOLOAD) : ALIGN(4) {
    _bss_start = .;
    *(.bss)
    *(.bss.*)
    _bss_end = .;
  } >a8ram :NONE

  /DISCARD/ :  {
    *(.ARM.exidx.*) /* Used for exception unwinding in gcclib. */
  }

  .orphan : {
    INPUT_SECTION_FLAGS(SHF_ALLOC) *(*)
  } :NONE
  ASSERT(SIZEOF(.orphan) == 0, "Unassigned sections!")
}
