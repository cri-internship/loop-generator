for (int nl = 0; nl < ntimes * 5; nl++) {
    x = a[0];
    for (int i = 1; i < LEN; ++i) {
        if (a[i] < x) {
            x = a[i];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, x);
}