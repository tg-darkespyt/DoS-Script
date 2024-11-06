int mapping_memory_pid (int x0, int x1) {
    loc_0x00000cb8:
        // CALL XREF from Write_error @ 0x109c(x)
        [sp - 0x40]! = x28
        [var_0hx10] = (x22, 2)
        [var_0hx20] = (x20, 2)
        [var_0hx30] = (x29, 2)
        x29 = sp + 0x30
        sp = sp - 0x430
        mrs x21, tpidr_el0
        x8 = [x21 + 0x28] // "P1" // elf_shdr
        x2 = 0x1000
        x19 = x0      // arg1
        x2 = x2 + 0xd0b // 0x1d0b // "/proc/%d/maps" // const char *format // str._proc__d_maps
        [x29 -0x38] = x8
        x8 = section..data // 0x13000
        w3 = [x8 + 0x28] // (pstr 0x00001fe1) "com.pubg.imobile" // str.com.pubg.imobile
        x0 = x29 - 0x58 // char *s
        // XREFS(30)
        w1 = 0x20
        [sp] = 0
        sym.imp.snprintf () // int snprintf("\xe8\x1e\x9b\f", 0x00000040, "/proc/%d/maps", 0x1fe1)
        // XREFS(30)
        x1 = 0x1000
        x1 = x1 + 0xd19 // const char *mode // "rt"
        x0 = x29 - 0x58 // const char *filename
        sym.imp.fopen () // file*fopen("\xe8\x1e\x9b\f", "rt")
        x20 = x0
        if (!x0) goto 0xd6c // unlikely
        goto loc_0x00000d18;
    loc_0x00000d6c:
        // CODE XREF from mapping_memory_pid @ 0xd14(x)
        x8 = [x21 + 0x28] // "P1" // elf_shdr
        x9 = [x29 -0x38]
        (a, b) = compare (x8, x9)
        if (eq) goto 0xd94 // likely
        goto loc_0x00000d7c;
    loc_0x00000d94:
        // CODE XREF from mapping_memory_pid @ 0xd78(x)
        sym.imp.__stack_chk_fail () // pidof_game // void __stack_chk_fail(void)
        return x0;
    loc_0x00000d1c: // orphan
         // DATA XREFS from mapping_memory_pid @ 0xd48(x), 0xd50(r)
         x0 = sp + 8              // char *s
         w1 = 0x400 // DATA XREF from pidof_game @ 0xdc8(r)
         x2 = x20                 // FILE *stream
         sym.imp.fgets () // char *fgets("", 0x00000000, 0)
         if (!x0) 
         goto loc_0x00000d60
    loc_0x00000d30: // orphan
         w8 = (byte) [x19] // DATA XREF from pidof_game @ 0xe50(r)
         x1 = x22
         if (w8 == 0) 
         goto loc_0x00000d40
    loc_0x00000d3c: // orphan
         x1 = [x19 + 0x10]

    loc_0x00000d40: // orphan
         // CODE XREF from mapping_memory_pid @ 0xd38(x)
         x0 = sp + 8              // const char *s1
         sym.imp.strstr () // char *strstr("", 0)
         if (!x0) 
         goto loc_0x00000d1c
    loc_0x00000d4c: // orphan
         x1 = 0x1000
         x1 = x1 + 0xd1c          // 0x1d1c // "%lx-%*s" // const char *format // str._lx__s
         x0 = sp + 8              // const char *s
         x2 = sp                  //   ...
         sym.imp.sscanf () // int sscanf("", "%lx-%*s", 0x178000)

    loc_0x00000d60: // orphan
         // CODE XREF from mapping_memory_pid @ 0xd2c(x)
         x0 = x20                 // FILE *stream
         sym.imp.fclose () // int fclose(0)
         x0 = [sp]

    loc_0x00000d7c: // orphan
         sp = sp + 0x430
         (x29, 2) = 3
         (x20, 2) = 3
         (x22, 2) = 3
         x28 = [sp] + 0x40

        return x0;
}

