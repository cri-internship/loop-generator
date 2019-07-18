for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 1; i < LEN; ++i) {
        t = a[i] + b[i];
        a[i] = t + c[i - 1];
        t = c[i] * d[i];
        c[i] = t;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}