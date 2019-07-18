for (int nl = 0; nl < ntimes * 10; nl++) {
    dot = 0.;
    for (int i = 0; i < LEN; i++) {
        dot += a[i] * b[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, dot);
}