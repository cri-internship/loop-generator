for (int nl = 0; nl < ntimes / 2; nl++) {
    for (int i = 1; i < LEN; i++) {
        a[i] += c[i] * d[i];
        b[i] = b[i - 1] + a[i] + d[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}