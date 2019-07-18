for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 4; i < LEN; i++) {
        b[i] = b[i - 4] + a[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}