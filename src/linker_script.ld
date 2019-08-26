MEMORY {
  a8ram (xrw) : org = 0x402F0400, len = 63k
}

PHDRS {
  image PT_LOAD;
}

ENTRY(_startup)

SECTIONS {
  . = ORIGIN(a8ram);
  .text ALIGN(4) : {
    *(.text._startup)
    *(.text)
    *(.text.*)
  } >a8ram :image

  .rodata ALIGN(4) : {
    *(.rodata)
    *(.rodata.*)
  } >a8ram :image

  .data ALIGN(4) : {
    *(.data)
    *(.data.*)
  } >a8ram :image

  .orphan : {
    INPUT_SECTION_FLAGS(SHF_ALLOC) *(*)
  } :NONE
  ASSERT(SIZEOF(.orphan) == 0, "Unassigned sections!")
}
