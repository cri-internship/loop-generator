for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        b[i] = d[i] * e[i];
        s152s(a, b, c, i);
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}