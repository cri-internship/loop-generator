for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN - 1; i += inc) {
        a[i] = a[i + inc] + b[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}