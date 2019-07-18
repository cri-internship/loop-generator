for (int nl = 0; nl < 3 * ntimes; nl++) {
    for (int i = LEN - 2; i >= 0; i--) {
        a[i + 1] = a[i] + b[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}