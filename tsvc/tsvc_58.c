for (int nl = 0; nl < ntimes / 2; nl++) {
    for (int i = 1; i < LEN; i++) {
        a[i] += b[i] * c[i];
        e[i] = e[i - 1] * e[i - 1];
        a[i] -= b[i] * c[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}