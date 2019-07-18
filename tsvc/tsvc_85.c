for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        a[i] = b[i] + c[i / 2] * d[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}