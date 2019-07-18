for (int nl = 0; nl < ntimes / 2; nl++) {
    for (int i = 1; i < LEN; i++) {
        a[i] = b[i - 1] + c[i] * d[i];
        b[i] = a[i] + c[i] * e[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}