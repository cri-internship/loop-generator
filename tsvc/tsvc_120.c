for (int nl = 0; nl < ntimes; nl++) {
    index = -2;
    value = -1.;
    for (int i = 0; i < LEN; i++) {
        if (a[i] > t) {
            index = i;
            value = a[i];
            goto L20;
        }
    }
    L20:
    chksum = value + (float) index;
    dummy(a, b, c, d, e, aa, bb, cc, chksum);
}