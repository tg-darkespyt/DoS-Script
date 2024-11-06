int fcn.00000d98 (int x0, int x1) {
    loc_0x00000d98:
        // CALL XREF from fcn.00001038 @ 0x1064(x)
        [sp - 0x60]! = (x28, 2)
        [sp + 0x10] = (x26, 2)
        [sp + 0x20] = (x24, 2)
        [sp + 0x30] = (x22, 2)
        [sp + 0x40] = (x20, 2)
        [sp + 0x50] = (x29, 2)
        x29 = sp + 0x50
        sp = sp - 0x1e0
        mrs x28, tpidr_el0
        x8 = [x28 + 0x28] // [0x1038:4]=0xd10243ff // fcn.00001038 // "P1" // elf_shdr
        x19 = x0      // arg1
        x1 = 0x1000
        x1 = x1 + 0xd24 // 0x1d24 // "pidof %s" // const char *format // str.pidof__s
        x0 = x29 - 0xa8 // char *s
        x2 = x19      //  ...
        [x29 -0x60] = x8
        sym.imp.sprintf () // int sprintf("", "pidof %s", 0)
        x1 = 0x1000
        x1 = x1 + 0xe9b // const char *mode // "r"
        x0 = x29 - 0xa8 // const char *filename
        sym.imp.popen () // file*popen("", "r")
        x20 = x0
        if (!x0) goto 0xe1c // unlikely
        goto loc_0x00000df4;
    loc_0x00000e1c:
        // CODE XREF from fcn.00000d98 @ 0xdf0(x)
        x0 = 0x1000
        x0 = x0 + 0xd2d // 0x1d2d // "/proc" // str._proc
        sym.imp.opendir ()
        x20 = x0      // "/proc" str._proc
        if (!x0) goto 0xef4 // unlikely
        goto loc_0x00000e30;
    loc_0x00000ef4:
        // CODE XREF from fcn.00000d98 @ 0xe2c(x)
        x21 = 0
        
    loc_0x00000ef8:
        // CODE XREFS from fcn.00000d98 @ 0xe3c(x), 0xedc(x), 0xef0(x)
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
        // DATA XREFS from section..plt @ 0xac8(r), 0xacc(r)
        // CODE XREFS from fcn.00000d98 @ 0xe18(r), 0xf18(r)
        x8 = [x28 + 0x28] // [0x1038:4]=0xd10243ff // fcn.00001038 // "P1" // elf_shdr
        x9 = [x29 -0x60]
        // DATA XREFS from sym.imp.popen @ 0xae4(r), 0xae8(r)
        (a, b) = compare (x8, x9)
        if (eq) goto 0xf50 // likely
        goto loc_0x00000f30;
    loc_0x00000f50:
        // DATA XREFS from sym.imp.__errno @ 0xb34(r), 0xb38(r)
        // CODE XREF from fcn.00000d98 @ 0xf2c(r)
        sym.imp.__stack_chk_fail () // fcn.00000f54 // void __stack_chk_fail(void)
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
         // CODE XREF from fcn.00000d98 @ 0xeec(x)
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
         // CODE XREFS from fcn.00000d98 @ 0xe70(x), 0xe80(x), 0xe8c(x), 0xeb0(x)
         x0 = x20
         sym.imp.readdir ()
         x21 = x0
         if (x0) 
         goto loc_0x00000e60
    loc_0x00000ef0: // orphan
         
         goto loc_0x00000ef8
    loc_0x00000ef8: // orphan
         // CODE XREFS from fcn.00000d98 @ 0xe3c(x), 0xedc(x), 0xef0(x)
         x0 = x20
         sym.imp.readdir ()
         x19 = x0
         x0 = x20
         sym.imp.closedir ()
         if (!x19) 
         goto loc_0x00000f1c
    loc_0x00000f10: // orphan
         // CODE XREF from fcn.00001038 @ 0x1778(w)
         x0 = x21 + 0x13          // const char *str
         sym.imp.atoi () // int atoi("")
         
         goto loc_0x00000f20
    loc_0x00000f1c: // orphan
         // CODE XREF from fcn.00000d98 @ 0xf0c(x)
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

