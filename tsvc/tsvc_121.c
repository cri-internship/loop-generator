for (int nl = 0; nl < ntimes; nl++) {
    j = -1;
    for (int i = 0; i < LEN; i++) {
        if (a[i] < (float) 0.) {
            j = i;
        }
    }
    chksum = (float) j;
    dummy(a, b, c, d, e, aa, bb, cc, chksum);
}