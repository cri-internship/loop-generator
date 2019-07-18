for (int nl = 0; nl < ntimes * 5; nl++) {
    dot = (float) 0.;
    for (int i = 0; i < LEN; i++) {
        dot += a[i] * b[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, dot);
}