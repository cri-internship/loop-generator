for (int nl = 0; nl < ntimes; nl++) {
    im1 = LEN - 1;
    im2 = LEN - 2;
    for (int i = 0; i < LEN; i++) {
        a[i] = (b[i] + b[im1] + b[im2]) * (float) .333;
        im2 = im1;
        im1 = i;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}