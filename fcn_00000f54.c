int fcn.00000f54 (int x0, int x1) {
    loc_0x00000f54:
        // CALL XREF from fcn.00001038 @ 0x1890(x)
        sp = sp - 0x50
        // DATA XREFS from sym.imp.snprintf @ 0xb44(r), 0xb48(r)
        [var_30h] = (x20, 2)
        [var_40h] = (x29, 2)
        // DATA XREFS from sym.imp.perror @ 0xb54(r), 0xb58(r)
        x29 = sp + 0x40
        mrs x20, tpidr_el0
        // DATA XREFS from sym.imp.sscanf @ 0xb64(r), 0xb68(r)
        x8 = [x20 + 0x28] // "P1" // elf_shdr
        x19 = x0      // arg1
        // DATA XREFS from sym.imp.fclose @ 0xb74(r), 0xb78(r)
        (a, b) = compare (w2, 1) // arg3
        [x29 -0x18] = x8
        // DATA XREFS from sym.imp.__stack_chk_fail @ 0xb84(r), 0xb88(r)
        if (eq) goto 0xf98 // unlikely
        goto loc_0x00000f7c;
    loc_0x00000f98:
        // DATA XREFS from sym.imp.syscall @ 0xbc4(r), 0xbc8(r)
        // CODE XREF from fcn.00000f54 @ 0xf78(r)
        x0 = x1       // const char *str
        sym.imp.atof () // double atof(0)
        // DATA XREFS from sym.imp.sprintf @ 0xbd4(r), 0xbd8(r)
        fcvt s0, d0
        x8 = sp + 4
        // DATA XREFS from sym.imp.strstr @ 0xbe4(r), 0xbe8(r)
        x9 = section..data // 0x13000
        [var_4h] = s0
        
    loc_0x00000fb0:
        // DATA XREFS from sym.imp.readdir @ 0xbf4(r), 0xbf8(r)
        // CODE XREF from fcn.00000f54 @ 0xf94(r)
        w1 = [x9 + 0x28] // "P1" // elf_shdr
        [arg_50hx18] = x8
        // DATA XREFS from sym.imp.fopen @ 0xc04(r), 0xc08(r)
        w8 = 4
        [arg_50hx20] = x8
        // DATA XREFS from sym.imp.pclose @ 0xc14(r), 0xc18(r)
        [var_8h] = (x19, 2)
        if (w1 != 0x1f) goto 0xff0 // unlikely
        goto loc_0x00000fc8;
        goto loc_0x00000fc8;
        goto loc_0x00000f80;
        return x0;
    loc_0x00000f80:
        // DATA XREFS from sym.imp.fgets @ 0xb94(r), 0xb98(r)
        x0 = x1       // const char *str
        sym.imp.atoi () // int atoi(0)
        // DATA XREFS from sym.imp.opendir @ 0xba4(r), 0xba8(r)
        [var_4h] = w0
        x8 = sp + 4
        // DATA XREFS from sym.imp.strcmp @ 0xbb4(r), 0xbb8(r)
        x9 = section..data // 0x13000
        goto 0xfb0
         goto loc_0x00000fb0
    loc_0x00000fb0: // orphan
         // DATA XREFS from sym.imp.readdir @ 0xbf4(r), 0xbf8(r) // CODE XREF from fcn.00000f54 @ 0xf94(r)
         w1 = [x9 + 0x28]         // "P1" // elf_shdr
         [arg_50hx18] = x8 // DATA XREFS from sym.imp.fopen @ 0xc04(r), 0xc08(r)
         w8 = 4
         [arg_50hx20] = x8 // DATA XREFS from sym.imp.pclose @ 0xc14(r), 0xc18(r)
         [var_8h] = (x19, 2)
         if (w1 != 0x1f) 
         goto loc_0x00000ff0
    loc_0x00000fc8: // orphan
         // DATA XREFS from sym.imp.__libc_init @ 0xc24(r), 0xc28(r)
         x8 = section..data       // 0x13000
         x0 = [x8 + 4] // DATA XREFS from sym.imp.__cxa_atexit @ 0xc34(r), 0xc38(r)
         x2 = sp + 0x18
         w3 = 1
         x4 = sp + 8
         w5 = 1 // DATA XREF from entry0 @ 0xc8c(r)
         x6 = 0
         sym.imp.syscall () // DATA XREF from entry0 @ 0xc7c(r)
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001010
    loc_0x00000ff0: // orphan
         // DATA XREF from entry0 @ 0xc88(r) // CODE XREFS from fcn.00000f54 @ 0xf7c(r), 0xfc4(x), 0x1030(x)
         x8 = [x20 + 0x28]        // "P1" // elf_shdr
         x9 = [x29 -0x18] // DATA XREF from entry0 @ 0xc84(r)
         (a, b) = compare (x8, x9) // DATA XREF from fcn.00001038 @ 0x1884(r)
         if (eq) 
         goto loc_0x00001034
    loc_0x00001000: // orphan
         // XREFS(73)
         (x29, 2) = 3
         (x20, 2) = 3
         sp = sp + 0x50

        return x0;
    loc_0x00001010: // orphan
         // CODE XREF from fcn.00000f54 @ 0xfec(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00000ff0
    loc_0x00001034: // orphan
         // CODE XREF from fcn.00000f54 @ 0xffc(x)
         sym.imp.__stack_chk_fail () // fcn.00001038 // void __stack_chk_fail(void)

        return x0;
}

