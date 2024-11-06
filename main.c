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

