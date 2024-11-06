int Write_error (int x0, int x1) {
    loc_0x00001038:
        // DATA XREF from main @ 0xc8c(r)
        // DATA XREFS from pidof_game @ 0xdbc(r), 0xf20(r)
        sp = sp - 0x90
        [var_50h] = (x24, 2)
        [var_60h] = (x22, 2)
        [var_70h] = (x20, 2)
        [var_80h] = (x29, 2)
        x29 = sp + 0x80
        mrs x20, tpidr_el0
        x8 = [x20 + 0x28] // "P1" // elf_shdr
        x0 = 0x1000
        x0 = x0 + 0xfe1 // 0x1fe1 // "com.pubg.imobile" // int64_t arg1 // str.com.pubg.imobile
        [x29 -0x38] = x8 // "P1"
        pidof_game () // pidof_game(0x1fe1, 0x0)
        x9 = 0x1000
        x9 = x9 + 0xff2 // 0x1ff2 // "libUE4.so" // str.libUE4.so
        x9 = [x9]     // [0x1ff2:4]=0x5562696c // "libUE4.so" // str.libUE4.so
        x21 = section..data // 0x13000
        w8 = 0x12
        [var_8h] = (0, 2)
        [x21 + 0x28] = w0 // (pstr 0x00001fe1) "com.pubg.imobile"
        [var_8h] = (byte) w8
        // CODE XREFS from Write_error @ 0x1770(r), 0x17f8(w)
        w8 = 0x6f     // 'o'
        x0 = sp + 8   // int64_t arg1
        [arg_90hx18] = 0
        sturh w8, [sp, 0x11]
        [sp 9] = x9
        mapping_memory_pid () // mapping_memory_pid(0x177f78, 0x0)
        w1 = [x21 + 0x28] // (pstr 0x00001fe1) "com.pubg.imobile" // str.com.pubg.imobile
        w8 = 0x9f70
        w8 = 0xc83 << 16
        x19 = sp + 0x20 // "P1"
        x8 = x0 + x8
        w9 = 8
        [arg_90hx38] = (x19, 2)
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x10ec // unlikely
        goto loc_0x000010c4;
    loc_0x000010ec:
        // CODE XREFS from Write_error @ 0x10c0(x), 0x18e0(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w9 = 8
        [arg_90hx38] = (x19, 2)
        x8 = x8 + 0x58
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1130 // unlikely
        goto loc_0x00001108;
    loc_0x00001130:
        // CODE XREFS from Write_error @ 0x1104(x), 0x1904(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x19 = sp + 0x20
        w9 = 8
        x8 = x8 + 0x78
        [arg_90hx38] = (x19, 2)
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1178 // unlikely
        goto loc_0x00001150;
    loc_0x00001178:
        // CODE XREFS from Write_error @ 0x114c(x), 0x1928(x)
        x9 = section..data // 0x13000
        x8 = [var_20h]
        x9 = [x9 + 8] // u(pstr 0x00000038) "\t@\x19\x18\x06"
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w10 = 8
        [arg_90hx38] = (x19, 2)
        x8 = x9 + x8
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x11c4 // unlikely
        goto loc_0x0000119c;
    loc_0x000011c4:
        // CODE XREFS from Write_error @ 0x1198(x), 0x194c(x)
        x9 = section..data // 0x13000
        x8 = [var_20h]
        x9 = [x9 + 0x10]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x19 = sp + 0x20
        w10 = 8
        x8 = x9 + x8
        [arg_90hx38] = (x19, 2)
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1214 // unlikely
        goto loc_0x000011ec;
    loc_0x00001214:
        // CODE XREFS from Write_error @ 0x11e8(x), 0x1970(x)
        x9 = section..data // 0x13000
        x8 = [var_20h]
        x9 = [x9 + 0x18]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w10 = 8
        [arg_90hx38] = (x19, 2)
        x8 = x9 + x8  // u"@8\t@\x19\x18\x06"
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1260 // unlikely
        goto loc_0x00001238;
    loc_0x00001260:
        // CODE XREFS from Write_error @ 0x1234(x), 0x1994(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x19 = sp + 0x20
        w9 = 8
        x8 = x8 + 0x4a0
        [arg_90hx38] = (x19, 2)
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x12a8 // unlikely
        goto loc_0x00001280;
    loc_0x000012a8:
        // CODE XREFS from Write_error @ 0x127c(x), 0x19b8(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w9 = 8
        [arg_90hx38] = (x19, 2)
        x19 = x8 + 0x30 // u"@8\t@\x19\x18\x06"
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x12ec // unlikely
        goto loc_0x000012c4;
    loc_0x000012ec:
        // CODE XREFS from Write_error @ 0x12c0(x), 0x19dc(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x22 = sp + 0x20
        w9 = 8
        x8 = x8 + 0x440
        [arg_90hx38] = (x22, 2)
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1334 // unlikely
        goto loc_0x0000130c;
    loc_0x00001334:
        // CODE XREFS from Write_error @ 0x1308(x), 0x1a00(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w9 = 8
        [arg_90hx38] = (x22, 2)
        x8 = x8 + 0xf8
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1378 // unlikely
        goto loc_0x00001350;
    loc_0x00001378:
        // CODE XREFS from Write_error @ 0x134c(x), 0x1a24(x)
        x22 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x23 = sp + 0x20
        w8 = 8
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x13bc // unlikely
        goto loc_0x00001394;
    loc_0x000013bc:
        // CODE XREFS from Write_error @ 0x1390(x), 0x1a48(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w9 = 8
        [arg_90hx38] = (x23, 2)
        x8 = x8 + 0x4b0
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1400 // unlikely
        goto loc_0x000013d8;
    loc_0x00001400:
        // CODE XREFS from Write_error @ 0x13d4(x), 0x1a6c(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x23 = sp + 0x20
        w9 = 8
        x8 = x8 + 0x4a0
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1448 // unlikely
        goto loc_0x00001420;
    loc_0x00001448:
        // CODE XREFS from Write_error @ 0x141c(x), 0x1a90(x)
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w8 = 8
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x1484 // unlikely
        goto loc_0x0000145c;
    loc_0x00001484:
        // CODE XREFS from Write_error @ 0x1458(x), 0x1ab4(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x23 = sp + 0x20
        w9 = 8
        x8 = x8 + 0x4b0
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x14cc // unlikely
        goto loc_0x000014a4;
    loc_0x000014cc:
        // CODE XREFS from Write_error @ 0x14a0(x), 0x1ad8(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w9 = 8
        [arg_90hx38] = (x23, 2)
        x8 = x8 + 0x4a0
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1510 // unlikely
        goto loc_0x000014e8;
    loc_0x00001510:
        // CODE XREFS from Write_error @ 0x14e4(x), 0x1afc(x)
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x23 = sp + 0x20
        w8 = 8
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x1550 // unlikely
        goto loc_0x00001528;
    loc_0x00001550:
        // CODE XREFS from Write_error @ 0x1524(x), 0x1b20(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w9 = 8
        [arg_90hx38] = (x23, 2)
        x8 = x8 + 0x440
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1594 // unlikely
        goto loc_0x0000156c;
    loc_0x00001594:
        // CODE XREFS from Write_error @ 0x1568(x), 0x1b44(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x23 = sp + 0x20
        w9 = 8
        x8 = x8 + 0x4a0
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x15dc // unlikely
        goto loc_0x000015b4;
    loc_0x000015dc:
        // CODE XREFS from Write_error @ 0x15b0(x), 0x1b68(x)
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w8 = 8
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x1618 // unlikely
        goto loc_0x000015f0;
    loc_0x00001618:
        // CODE XREFS from Write_error @ 0x15ec(x), 0x1b8c(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x23 = sp + 0x20
        w9 = 8
        x8 = x8 + 0x440
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1660 // unlikely
        goto loc_0x00001638;
    loc_0x00001660:
        // CODE XREFS from Write_error @ 0x1634(x), 0x1bb0(x)
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w8 = 8
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x169c // unlikely
        goto loc_0x00001674;
    loc_0x0000169c:
        // CODE XREFS from Write_error @ 0x1670(x), 0x1bd4(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x23 = sp + 0x20
        w9 = 8
        x8 = x8 + 0x440
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x16e4 // unlikely
        goto loc_0x000016bc;
    loc_0x000016e4:
        // CODE XREFS from Write_error @ 0x16b8(x), 0x1bf8(x)
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w8 = 8
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x1720 // unlikely
        goto loc_0x000016f8;
    loc_0x00001720:
        // CODE XREFS from Write_error @ 0x16f4(x), 0x1c1c(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x24 = sp + 0x20
        w9 = 8
        x8 = x8 + 0x440
        [arg_90hx38] = (x24, 2)
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1768 // unlikely
        goto loc_0x00001740;
    loc_0x00001768:
        // CODE XREFS from Write_error @ 0x173c(x), 0x1c40(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w23 = 0x1088
        w9 = 8
        x8 = x8 + 0xf10
        [arg_90hx38] = (x24, 2)
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x17b0 // unlikely
        goto loc_0x00001788;
    loc_0x000017b0:
        // CODE XREFS from Write_error @ 0x1784(x), 0x1c64(x)
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x24 = sp + 0x20
        w8 = 8
        [arg_90hx38] = (x24, 2)
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x17f0 // unlikely
        goto loc_0x000017c8;
    loc_0x000017f0:
        // CODE XREFS from Write_error @ 0x17c4(x), 0x1c88(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x19 = x22 + x23
        w9 = 8
        x8 = x8 + 0x440
        [arg_90hx38] = (x24, 2)
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1838 // unlikely
        goto loc_0x00001810;
    loc_0x00001838:
        // CODE XREFS from Write_error @ 0x180c(x), 0x1cac(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x9 = sp + 0x20
        w10 = 8
        x8 = x8 + 0x1b0
        [arg_90hx38] = (x9, 2)
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1880 // unlikely
        goto loc_0x00001858;
    loc_0x00001880:
        // CODE XREFS from Write_error @ 0x1854(x), 0x1cd0(x)
        x1 = 0x1000
        x1 = x1 + 0xffc // char *str // u(pstr 0x00000034) "@8\t@\x19\x18\x06"
        w2 = 1
        x0 = x19      // int64_t arg1
        directory_404_error () // directory_404_error(0x0, 0x1ffc, 0x1, 0x0)
        x8 = [x20 + 0x28] // "P1" // elf_shdr
        x9 = [x29 -0x38]
        (a, b) = compare (x8, x9)
        if (eq) goto 0x1cd4 // likely
        goto loc_0x000018a4;
    loc_0x00001cd4:
        // CODE XREF from Write_error @ 0x18a0(x)
        sym.imp.__stack_chk_fail () // section..rodata // void __stack_chk_fail(void)
        goto loc_0x00001880;
        goto loc_0x00001838;
        goto loc_0x000017f0;
        goto loc_0x000017b0;
        goto loc_0x00001768;
        goto loc_0x00001720;
        goto loc_0x000016e4;
        goto loc_0x0000169c;
        goto loc_0x00001660;
        goto loc_0x00001618;
        goto loc_0x000015dc;
        goto loc_0x00001594;
        goto loc_0x00001550;
        goto loc_0x00001510;
        goto loc_0x000014cc;
        goto loc_0x00001484;
        goto loc_0x00001448;
        goto loc_0x00001400;
        goto loc_0x000013bc;
        goto loc_0x00001378;
        goto loc_0x00001334;
        goto loc_0x000012ec;
        goto loc_0x000012a8;
        goto loc_0x00001260;
        goto loc_0x00001214;
        goto loc_0x000011c4;
        goto loc_0x00001178;
        goto loc_0x00001130;
        goto loc_0x000010ec;
        return x0;
    loc_0x000018c0:
        // CODE XREF from Write_error @ 0x10e8(x)
        x0 = 0x1000
        x0 = x0 + 0xcf4 // 0x1cf4 // "Write error" // const char *s // str.Write_error
        sym.imp.perror () // void perror("Write error")
        sym.imp.__errno ()
        w1 = [x0]     // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
        x0 = 0x1000
        x0 = x0 + 0xd00 // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
        sym.imp.printf () // int printf("errno: %d\n")
        goto 0x10ec
         goto loc_0x000010ec
    loc_0x00001108: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x000018e4
    loc_0x00001150: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001908
    loc_0x0000119c: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x0000192c
    loc_0x000011ec: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001950
    loc_0x00001238: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001974
    loc_0x00001280: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001998
    loc_0x000012c4: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x000019bc
    loc_0x0000130c: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x000019e0
    loc_0x00001350: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001a04
    loc_0x00001394: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001a28
    loc_0x000013d8: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001a4c
    loc_0x00001420: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001a70
    loc_0x0000145c: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001a94
    loc_0x000014a4: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001ab8
    loc_0x000014e8: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001adc
    loc_0x00001528: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001b00
    loc_0x0000156c: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001b24
    loc_0x000015b4: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001b48
    loc_0x000015f0: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001b6c
    loc_0x00001638: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001b90
    loc_0x00001674: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001bb4
    loc_0x000016bc: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001bd8
    loc_0x000016f8: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001bfc
    loc_0x00001740: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001c20
    loc_0x00001788: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001c44
    loc_0x000017c8: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001c68
    loc_0x00001810: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001c8c
    loc_0x00001858: // orphan
         x8 = section..data       // 0x13000
         x0 = [x8]                // [0x13000:4]=270 // section..data
                                  [21] -rw- section size 32 named .data
         x2 = sp + 0x38
         w3 = 1
         x4 = sp + 0x28
         w5 = 1
         x6 = 0
         sym.imp.syscall ()
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001cb0
    loc_0x000018a4: // orphan
         (x29, 2) = 3
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         w0 = 0
         sp = sp + 0x90

        return x0;
    loc_0x000018e4: // orphan
         // CODE XREF from Write_error @ 0x112c(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001130
    loc_0x00001908: // orphan
         // CODE XREF from Write_error @ 0x1174(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001178
    loc_0x0000192c: // orphan
         // CODE XREF from Write_error @ 0x11c0(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x000011c4
    loc_0x00001950: // orphan
         // CODE XREF from Write_error @ 0x1210(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001214
    loc_0x00001974: // orphan
         // CODE XREF from Write_error @ 0x125c(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error") // DATA XREF from section..dynstr @ +0x9c(r)
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001260
    loc_0x00001998: // orphan
         // CODE XREF from Write_error @ 0x12a4(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x000012a8
    loc_0x000019bc: // orphan
         // CODE XREF from Write_error @ 0x12e8(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x000012ec
    loc_0x000019e0: // orphan
         // CODE XREF from Write_error @ 0x1330(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001334
    loc_0x00001a04: // orphan
         // CODE XREF from Write_error @ 0x1374(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001378
    loc_0x00001a28: // orphan
         // CODE XREF from Write_error @ 0x13b8(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x000013bc
    loc_0x00001a4c: // orphan
         // CODE XREF from Write_error @ 0x13fc(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001400
    loc_0x00001a70: // orphan
         // CODE XREF from Write_error @ 0x1444(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001448
    loc_0x00001a94: // orphan
         // CODE XREF from Write_error @ 0x1480(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001484
    loc_0x00001ab8: // orphan
         // CODE XREF from Write_error @ 0x14c8(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x000014cc
    loc_0x00001adc: // orphan
         // CODE XREF from Write_error @ 0x150c(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001510
    loc_0x00001b00: // orphan
         // CODE XREF from Write_error @ 0x154c(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001550
    loc_0x00001b24: // orphan
         // CODE XREF from Write_error @ 0x1590(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001594
    loc_0x00001b48: // orphan
         // CODE XREF from Write_error @ 0x15d8(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x000015dc
    loc_0x00001b6c: // orphan
         // CODE XREF from Write_error @ 0x1614(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001618
    loc_0x00001b90: // orphan
         // CODE XREF from Write_error @ 0x165c(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001660
    loc_0x00001bb4: // orphan
         // CODE XREF from Write_error @ 0x1698(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x0000169c
    loc_0x00001bd8: // orphan
         // CODE XREF from Write_error @ 0x16e0(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x000016e4
    loc_0x00001bfc: // orphan
         // CODE XREF from Write_error @ 0x171c(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001720
    loc_0x00001c20: // orphan
         // CODE XREF from Write_error @ 0x1764(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001768
    loc_0x00001c44: // orphan
         // CODE XREF from Write_error @ 0x17ac(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x000017b0
    loc_0x00001c68: // orphan
         // CODE XREF from Write_error @ 0x17ec(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x000017f0
    loc_0x00001c8c: // orphan
         // CODE XREF from Write_error @ 0x1834(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001838
    loc_0x00001cb0: // orphan
         // CODE XREF from Write_error @ 0x187c(x)
         x0 = 0x1000
         x0 = x0 + 0xcf4          // 0x1cf4 // "Write error" // const char *s // str.Write_error
         sym.imp.perror () // void perror("Write error")
         sym.imp.__errno ()
         w1 = [x0]                // [0x1cf4:4]=0x74697257 // "Write error" // str.Write_error
         x0 = 0x1000
         x0 = x0 + 0xd00          // 0x1d00 // "errno: %d\n" // const char *format // str.errno:__d_n
         sym.imp.printf () // int printf("errno: %d\n")
         
         goto loc_0x00001880
}

int directory_404_error (int x0, int x1) {
    loc_0x00000f54:
        // CALL XREF from Write_error @ 0x1890(x)
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
        // CODE XREF from directory_404_error @ 0xf78(r)
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
        // CODE XREF from directory_404_error @ 0xf94(r)
        w1 = [x9 + 0x28] // "P1" // elf_shdr
        [arg_50hx18] = x8 // (cstr 0x000001b0) ","
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
         // DATA XREFS from sym.imp.readdir @ 0xbf4(r), 0xbf8(r) // CODE XREF from directory_404_error @ 0xf94(r)
         w1 = [x9 + 0x28]         // "P1" // elf_shdr
         [arg_50hx18] = x8        // (cstr 0x000001b0) "," // DATA XREFS from sym.imp.fopen @ 0xc04(r), 0xc08(r)
         w8 = 4
         [arg_50hx20] = x8 // DATA XREFS from sym.imp.pclose @ 0xc14(r), 0xc18(r)
         [var_8h] = (x19, 2)
         if (w1 != 0x1f) 
         goto loc_0x00000ff0
    loc_0x00000fc8: // orphan
         // DATA XREFS from sym.imp.__libc_init @ 0xc24(r), 0xc28(r)
         x8 = section..data       // 0x13000
         x0 = [x8 + 4] // DATA XREFS from sym.imp.__cxa_atexit @ 0xc34(r), 0xc38(r)
         x2 = sp + 0x18           // (cstr 0x000001b0) ","
         w3 = 1
         x4 = sp + 8
         w5 = 1 // DATA XREF from main @ 0xc8c(r)
         x6 = 0
         sym.imp.syscall () // DATA XREF from main @ 0xc7c(r)
         if (x0 != 1)
         if (eq) 
         goto loc_0x00001010
    loc_0x00000ff0: // orphan
         // DATA XREF from main @ 0xc88(r) // CODE XREFS from directory_404_error @ 0xf7c(r), 0xfc4(x), 0x1030(x)
         x8 = [x20 + 0x28]        // "P1" // elf_shdr
         x9 = [x29 -0x18] // DATA XREF from main @ 0xc84(r)
         (a, b) = compare (x8, x9) // DATA XREF from Write_error @ 0x1884(r)
         if (eq) 
         goto loc_0x00001034
    loc_0x00001000: // orphan
         // XREFS(73)
         (x29, 2) = 3
         (x20, 2) = 3
         sp = sp + 0x50

        return x0;
    loc_0x00001010: // orphan
         // CODE XREF from directory_404_error @ 0xfec(x)
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
         // CODE XREF from directory_404_error @ 0xffc(x)
         sym.imp.__stack_chk_fail () // Write_error // void __stack_chk_fail(void)

        return x0;
}

int main (int x0, int x1) {
    loc_0x00000c40:
        x0 = sp       // [12] -r-x section size 4248 named .text
        goto 0xc60
        
    loc_0x00000c60:
        // CODE XREF from main @ 0xc44(x)
        x2 = 0x12000
        x6 = 0x12000
        x5 = 0x12000
        x4 = 0x12000
        [sp - 0x30]! = (x29, 2)
        x1 = 0
        x29 = sp
        x6 = [x6 + 0xfe8] // [0x12cb0:4]=-1 // obj.__PREINIT_ARRAY__
        [16] -rw- section size 16 named .preinit_array
        x3 = x29 + 0x18
        x5 = [x5 + 0xff8] // [0x12cc0:4]=-1 // obj.__INIT_ARRAY__
        [17] -rw- section size 16 named .init_array
        x4 = [x4 + 0xff0] // [0x12cd0:4]=-1 // obj.__FINI_ARRAY__
        [18] -rw- section size 16 named .fini_array
        x2 = [x2 + 0xfe0] // [0x1038:4]=0xd10243ff // Write_error
        [x29 + 0x18] = x6
        [x29 + 0x20] = x5
        [x29 + 0x28] = x4
        sym.imp.__libc_init ()
        x1 = x0
        x2 = section..data // 0x13000
        x0 = 0
        x2 = x2 + 0x20 // 0x13020 // loc._edata
        [22] -rw- section size 16 named .bss
        x0 = x0 + return_method // 0xc48
        goto sym.imp.__cxa_atexit
        return x0;
}

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

int pidof_game (int x0, int x1) {
    loc_0x00000d98:
        // CALL XREF from Write_error @ 0x1064(x)
        [sp - 0x60]! = (x28, 2)
        [sp + 0x10] = (x26, 2)
        [sp + 0x20] = (x24, 2)
        [sp + 0x30] = (x22, 2)
        [sp + 0x40] = (x20, 2)
        [sp + 0x50] = (x29, 2)
        x29 = sp + 0x50
        sp = sp - 0x1e0
        mrs x28, tpidr_el0
        x8 = [x28 + 0x28] // [0x1038:4]=0xd10243ff // Write_error // "P1" // elf_shdr
        x19 = x0      // arg1
        x1 = 0x1000
        x1 = x1 + 0xd24 // 0x1d24 // "pidof %s" // const char *format // str.pidof__s
        x0 = x29 - 0xa8 // char *s
        x2 = x19      //  ...
        [x29 -0x60] = x8 // "P1"
        sym.imp.sprintf () // int sprintf("", "pidof %s", 0)
        x1 = 0x1000
        x1 = x1 + 0xe9b // const char *mode // "r"
        x0 = x29 - 0xa8 // const char *filename
        sym.imp.popen () // file*popen("", "r")
        x20 = x0
        if (!x0) goto 0xe1c // unlikely
        goto loc_0x00000df4;
    loc_0x00000e1c:
        // CODE XREF from pidof_game @ 0xdf0(x)
        x0 = 0x1000
        x0 = x0 + 0xd2d // 0x1d2d // "/proc" // str._proc
        sym.imp.opendir ()
        x20 = x0      // "/proc" str._proc
        if (!x0) goto 0xef4 // unlikely
        goto loc_0x00000e30;
    loc_0x00000ef4:
        // CODE XREF from pidof_game @ 0xe2c(x)
        x21 = 0
        
    loc_0x00000ef8:
        // CODE XREFS from pidof_game @ 0xe3c(x), 0xedc(x), 0xef0(x)
        x0 = x20
        sym.imp.readdir ()
        x19 = x0
        x0 = x20
        sym.imp.closedir ()
        if (!x19) goto 0xf1c // likely
        goto loc_0x00000f10;
        goto loc_0x00000f10;
        goto loc_0x00000e40;
        goto loc_0x00000e1c;
        return x0;
    loc_0x00000f20:
        // DATA XREFS from plt_hook @ 0xac8(r), 0xacc(r)
        // CODE XREFS from pidof_game @ 0xe18(r), 0xf18(r)
        x8 = [x28 + 0x28] // [0x1038:4]=0xd10243ff // Write_error // "P1" // elf_shdr
        x9 = [x29 -0x60]
        // DATA XREFS from sym.imp.popen @ 0xae4(r), 0xae8(r)
        (a, b) = compare (x8, x9)
        if (eq) goto 0xf50 // likely
        goto loc_0x00000f30;
    loc_0x00000f50:
        // DATA XREFS from sym.imp.__errno @ 0xb34(r), 0xb38(r)
        // CODE XREF from pidof_game @ 0xf2c(r)
        sym.imp.__stack_chk_fail () // directory_404_error // void __stack_chk_fail(void)
        return x0;
    loc_0x00000e30: // orphan
         x0 = x20
         sym.imp.readdir ()
         x21 = x0
         if (!x0) 
         goto loc_0x00000ef8
    loc_0x00000e40: // orphan
         x22 = 0x1000
         x23 = 0x1000
         x24 = 0x1000
         x25 = 0x1000
         x22 = x22 + 0xd34        // "."
         x23 = x23 + 0xd33        // ".."
         x24 = x24 + 0xd36        // 0x1d36 // "/proc/%s/cmdline" // str._proc__s_cmdline
         x25 = x25 + 0xe9b        // "r"

    loc_0x00000e60: // orphan
         // CODE XREF from pidof_game @ 0xeec(x)
         x26 = x21 + 0x13
         x0 = x26                 // const char *s1
         x1 = x22                 // const char *s2
         sym.imp.strcmp () // int strcmp("", 0)
         if (!w0) 
         goto loc_0x00000ee0
    loc_0x00000e74: // orphan
         x0 = x26                 // const char *s1
         x1 = x23                 // const char *s2
         sym.imp.strcmp () // int strcmp(0, 0)
         if (!w0) 
         goto loc_0x00000ee0
    loc_0x00000e84: // orphan
         w8 = (byte) [x21 + 0x12]
         (a, b) = compare (w8, 4)
         if (eq) 
         goto loc_0x00000ee0
    loc_0x00000e90: // orphan
         x0 = sp + 0x88           // char *s
         x1 = x24                 // const char *format
         x2 = x26                 //  ...
         sym.imp.sprintf () // int sprintf("", 0, 0)
         x0 = sp + 0x88           // const char *filename
         x1 = x25                 // const char *mode
         sym.imp.fopen () // file*fopen("", 0)
         x26 = x0
         if (!x0) 
         goto loc_0x00000ee0
    loc_0x00000eb4: // orphan
         x0 = sp + 8              // char *s
         w1 = 0x80                // (pstr 0x00000238) "/system/bin/linker64"
         x2 = x26                 // FILE *stream
         sym.imp.fgets () // char *fgets("", 0x00000238, 0)
         x0 = sp + 8              // const char *s1
         x1 = x19                 // const char *s2
         sym.imp.strcmp () // int strcmp("", 0)
         w27 = w0
         x0 = x26                 // FILE *stream
         sym.imp.fclose () // int fclose(0)
         if (!w27) 
         goto loc_0x00000ef8
    loc_0x00000ee0: // orphan
         // CODE XREFS from pidof_game @ 0xe70(x), 0xe80(x), 0xe8c(x), 0xeb0(x)
         x0 = x20
         sym.imp.readdir ()
         x21 = x0
         if (x0) 
         goto loc_0x00000e60
    loc_0x00000ef0: // orphan
         
         goto loc_0x00000ef8
    loc_0x00000ef8: // orphan
         // CODE XREFS from pidof_game @ 0xe3c(x), 0xedc(x), 0xef0(x)
         x0 = x20
         sym.imp.readdir ()
         x19 = x0
         x0 = x20
         sym.imp.closedir ()
         if (!x19) 
         goto loc_0x00000f1c
    loc_0x00000f10: // orphan
         // CODE XREF from Write_error @ 0x1778(w)
         x0 = x21 + 0x13          // const char *str
         sym.imp.atoi () // int atoi("")
         
         goto loc_0x00000f20
    loc_0x00000f1c: // orphan
         // CODE XREF from pidof_game @ 0xf0c(x)
         w0 = 0

    loc_0x00000f30: // orphan
         // DATA XREFS from sym.imp.atoi @ 0xaf4(r), 0xaf8(r)
         sp = sp + 0x1e0
         (x29, 2) = 3 // DATA XREFS from sym.imp.printf @ 0xb04(r), 0xb08(r)
         (x20, 2) = 3
         (x22, 2) = 3 // DATA XREFS from sym.imp.atof @ 0xb14(r), 0xb18(r)
         (x24, 2) = 3
         (x26, 2) = 3 // DATA XREFS from sym.imp.closedir @ 0xb24(r), 0xb28(r)
         (x28, 2) = 3

        return x0;
}

int plt_hook (int x0, int x1) {
    loc_0x00000ac0:
        // XREFS(22)
        [sp - 0x10]! = (x16, 2) // [11] -r-x section size 384 named .plt
        x16 = 0x12000
        x17 = [x16 + 0xf20]
        x16 = x16 + 0xf20
        switch x17
        return x0;
}

int return_method (int x0, int x1) {
    loc_0x00000c48:
        // DATA XREF from main @ 0xcb0(w)
        [sp - 0x10]! = (x29, 2)
        x29 = sp
        if (!x0) goto 0xc58 // likely
        goto loc_0x00000c54;
    loc_0x00000c58:
        // CODE XREF from return_method @ 0xc50(x)
        (x29, 2) = 3
        return x0;
}

