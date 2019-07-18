for (int nl = 0; nl < 4 * ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        s = b[i] + c[i] * d[i];
        a[i] = s * s;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}