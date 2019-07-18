for (int nl = 0; nl < ntimes; nl++) {
    x = b[LEN - 1];
    y = b[LEN - 2];
    for (int i = 0; i < LEN; i++) {
        a[i] = (b[i] + x + y) * (float) .333;
        y = x;
        x = b[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}