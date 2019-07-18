for (int nl = 0; nl < ntimes / 5; nl++) {
    for (int i = 1; i < LEN; ++i) {
        a[i] = a[i - 1] + s1 + s2 + b[i] + c[i] + d[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}