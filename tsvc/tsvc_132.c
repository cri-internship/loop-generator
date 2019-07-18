for (int nl = 0; nl < 5 * ntimes; nl++) {
    q = (float) 1.;
    for (int i = 0; i < LEN / 2; i++) {
        q *= (float) .99;
    }
    dummy(a, b, c, d, e, aa, bb, cc, q);
}