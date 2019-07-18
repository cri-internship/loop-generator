for (int nl = 0; nl < ntimes; nl++) {
    if (k > 0) {
        for (int i = 0; i < LEN - 1; i++) {
            a[i] = a[i + k] + b[i] * c[i];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}