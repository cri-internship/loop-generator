for (int nl = 0; nl < 4 * ntimes; nl++) {
    yy = xx;
    for (int i = 0; i < LEN - 1; i++) {
        xx[i] = yy[i + 1] + a[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 1.);
}