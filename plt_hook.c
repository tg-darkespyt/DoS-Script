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

