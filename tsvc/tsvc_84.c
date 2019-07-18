for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        a[i] += f(b[i], c[i]);
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}