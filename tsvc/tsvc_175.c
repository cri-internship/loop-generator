for (int nl = 0; nl < 4 * ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        s = b[i] + c[i];
        b[i] = a[i] + d[i];
        a[i] = s * e[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}