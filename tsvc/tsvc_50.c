for (int nl = 0; nl < 10 * ntimes; nl++) {
    for (int i = 0; i < M; i++) {
        a[i + M] = a[i] + b[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}