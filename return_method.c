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

