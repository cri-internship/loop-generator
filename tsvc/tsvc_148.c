for (int nl = 0; nl < 2 * ntimes; nl++) {
    im1 = LEN - 1;
    for (int i = 0; i < LEN; i++) {
        a[i] = (b[i] + b[im1]) * (float) .5;
        im1 = i;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}