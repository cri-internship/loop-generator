for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN - 1; i++) {
        a[i] = b[i] + c[i] * c[i] + b[i] * b[i] + c[i];
        d[i] = a[i] + a[i + 1];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}