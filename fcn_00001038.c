int fcn.00001038 (int x0, int x1) {
    loc_0x00001038:
        // DATA XREF from entry0 @ 0xc8c(r)
        // DATA XREFS from fcn.00000d98 @ 0xdbc(r), 0xf20(r)
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
        fcn.00000d98 () // fcn.00000d98(0x1fe1, 0x0)
        x9 = 0x1000
        x9 = x9 + 0xff2 // 0x1ff2 // "libUE4.so" // str.libUE4.so
        x9 = [x9]     // [0x1ff2:4]=0x5562696c // "libUE4.so" // str.libUE4.so
        x21 = section..data // 0x13000
        w8 = 0x12
        [var_8h] = (0, 2)
        [x21 + 0x28] = w0
        [var_8h] = (byte) w8
        // CODE XREFS from fcn.00001038 @ 0x1770(r), 0x17f8(w)
        w8 = 0x6f     // 'o'
        x0 = sp + 8   // int64_t arg1
        [arg_90hx18] = 0
        sturh w8, [sp, 0x11]
        [sp 9] = x9
        fcn.00000cb8 () // fcn.00000cb8(0x177f78, 0x0)
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
        // CODE XREFS from fcn.00001038 @ 0x10c0(x), 0x18e0(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w9 = 8
        [arg_90hx38] = (x19, 2)
        x8 = x8 + 0x58
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1130 // unlikely
        goto loc_0x00001108;
    loc_0x00001130:
        // CODE XREFS from fcn.00001038 @ 0x1104(x), 0x1904(x)
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
        // CODE XREFS from fcn.00001038 @ 0x114c(x), 0x1928(x)
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
        // CODE XREFS from fcn.00001038 @ 0x1198(x), 0x194c(x)
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
        // CODE XREFS from fcn.00001038 @ 0x11e8(x), 0x1970(x)
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
        // CODE XREFS from fcn.00001038 @ 0x1234(x), 0x1994(x)
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
        // CODE XREFS from fcn.00001038 @ 0x127c(x), 0x19b8(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w9 = 8
        [arg_90hx38] = (x19, 2)
        x19 = x8 + 0x30 // u"@8\t@\x19\x18\x06"
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x12ec // unlikely
        goto loc_0x000012c4;
    loc_0x000012ec:
        // CODE XREFS from fcn.00001038 @ 0x12c0(x), 0x19dc(x)
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
        // CODE XREFS from fcn.00001038 @ 0x1308(x), 0x1a00(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w9 = 8
        [arg_90hx38] = (x22, 2)
        x8 = x8 + 0xf8
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1378 // unlikely
        goto loc_0x00001350;
    loc_0x00001378:
        // CODE XREFS from fcn.00001038 @ 0x134c(x), 0x1a24(x)
        x22 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x23 = sp + 0x20
        w8 = 8
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x13bc // unlikely
        goto loc_0x00001394;
    loc_0x000013bc:
        // CODE XREFS from fcn.00001038 @ 0x1390(x), 0x1a48(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w9 = 8
        [arg_90hx38] = (x23, 2)
        x8 = x8 + 0x4b0
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1400 // unlikely
        goto loc_0x000013d8;
    loc_0x00001400:
        // CODE XREFS from fcn.00001038 @ 0x13d4(x), 0x1a6c(x)
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
        // CODE XREFS from fcn.00001038 @ 0x141c(x), 0x1a90(x)
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w8 = 8
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x1484 // unlikely
        goto loc_0x0000145c;
    loc_0x00001484:
        // CODE XREFS from fcn.00001038 @ 0x1458(x), 0x1ab4(x)
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
        // CODE XREFS from fcn.00001038 @ 0x14a0(x), 0x1ad8(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w9 = 8
        [arg_90hx38] = (x23, 2)
        x8 = x8 + 0x4a0
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1510 // unlikely
        goto loc_0x000014e8;
    loc_0x00001510:
        // CODE XREFS from fcn.00001038 @ 0x14e4(x), 0x1afc(x)
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x23 = sp + 0x20
        w8 = 8
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x1550 // unlikely
        goto loc_0x00001528;
    loc_0x00001550:
        // CODE XREFS from fcn.00001038 @ 0x1524(x), 0x1b20(x)
        x8 = [var_20h]
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w9 = 8
        [arg_90hx38] = (x23, 2)
        x8 = x8 + 0x440
        [arg_90hx28] = (x8, 2)
        if (w1 != 0x1f) goto 0x1594 // unlikely
        goto loc_0x0000156c;
    loc_0x00001594:
        // CODE XREFS from fcn.00001038 @ 0x1568(x), 0x1b44(x)
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
        // CODE XREFS from fcn.00001038 @ 0x15b0(x), 0x1b68(x)
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w8 = 8
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x1618 // unlikely
        goto loc_0x000015f0;
    loc_0x00001618:
        // CODE XREFS from fcn.00001038 @ 0x15ec(x), 0x1b8c(x)
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
        // CODE XREFS from fcn.00001038 @ 0x1634(x), 0x1bb0(x)
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w8 = 8
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x169c // unlikely
        goto loc_0x00001674;
    loc_0x0000169c:
        // CODE XREFS from fcn.00001038 @ 0x1670(x), 0x1bd4(x)
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
        // CODE XREFS from fcn.00001038 @ 0x16b8(x), 0x1bf8(x)
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        w8 = 8
        [arg_90hx38] = (x23, 2)
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x1720 // unlikely
        goto loc_0x000016f8;
    loc_0x00001720:
        // CODE XREFS from fcn.00001038 @ 0x16f4(x), 0x1c1c(x)
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
        // CODE XREFS from fcn.00001038 @ 0x173c(x), 0x1c40(x)
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
        // CODE XREFS from fcn.00001038 @ 0x1784(x), 0x1c64(x)
        w1 = [x21 + 0x28] // "P1" // elf_shdr
        x24 = sp + 0x20
        w8 = 8
        [arg_90hx38] = (x24, 2)
        [arg_90hx28] = (x19, 2)
        if (w1 != 0x1f) goto 0x17f0 // unlikely
        goto loc_0x000017c8;
    loc_0x000017f0:
        // CODE XREFS from fcn.00001038 @ 0x17c4(x), 0x1c88(x)
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
        // CODE XREFS from fcn.00001038 @ 0x180c(x), 0x1cac(x)
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
        // CODE XREFS from fcn.00001038 @ 0x1854(x), 0x1cd0(x)
        x1 = 0x1000
        x1 = x1 + 0xffc // char *str // u(pstr 0x00000034) "@8\t@\x19\x18\x06"
        w2 = 1
        x0 = x19      // int64_t arg1
        fcn.00000f54 () // fcn.00000f54(0x0, 0x1ffc, 0x1, 0x0)
        x8 = [x20 + 0x28] // "P1" // elf_shdr
        x9 = [x29 -0x38]
        (a, b) = compare (x8, x9)
        if (eq) goto 0x1cd4 // likely
        goto loc_0x000018a4;
    loc_0x00001cd4:
        // CODE XREF from fcn.00001038 @ 0x18a0(x)
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
        // CODE XREF from fcn.00001038 @ 0x10e8(x)
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
         // CODE XREF from fcn.00001038 @ 0x112c(x)
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
         // CODE XREF from fcn.00001038 @ 0x1174(x)
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
         // CODE XREF from fcn.00001038 @ 0x11c0(x)
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
         // CODE XREF from fcn.00001038 @ 0x1210(x)
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
         // CODE XREF from fcn.00001038 @ 0x125c(x)
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
         // CODE XREF from fcn.00001038 @ 0x12a4(x)
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
         // CODE XREF from fcn.00001038 @ 0x12e8(x)
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
         // CODE XREF from fcn.00001038 @ 0x1330(x)
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
         // CODE XREF from fcn.00001038 @ 0x1374(x)
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
         // CODE XREF from fcn.00001038 @ 0x13b8(x)
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
         // CODE XREF from fcn.00001038 @ 0x13fc(x)
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
         // CODE XREF from fcn.00001038 @ 0x1444(x)
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
         // CODE XREF from fcn.00001038 @ 0x1480(x)
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
         // CODE XREF from fcn.00001038 @ 0x14c8(x)
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
         // CODE XREF from fcn.00001038 @ 0x150c(x)
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
         // CODE XREF from fcn.00001038 @ 0x154c(x)
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
         // CODE XREF from fcn.00001038 @ 0x1590(x)
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
         // CODE XREF from fcn.00001038 @ 0x15d8(x)
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
         // CODE XREF from fcn.00001038 @ 0x1614(x)
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
         // CODE XREF from fcn.00001038 @ 0x165c(x)
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
         // CODE XREF from fcn.00001038 @ 0x1698(x)
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
         // CODE XREF from fcn.00001038 @ 0x16e0(x)
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
         // CODE XREF from fcn.00001038 @ 0x171c(x)
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
         // CODE XREF from fcn.00001038 @ 0x1764(x)
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
         // CODE XREF from fcn.00001038 @ 0x17ac(x)
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
         // CODE XREF from fcn.00001038 @ 0x17ec(x)
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
         // CODE XREF from fcn.00001038 @ 0x1834(x)
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
         // CODE XREF from fcn.00001038 @ 0x187c(x)
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

