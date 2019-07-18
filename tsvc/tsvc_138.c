for (int nl = 0; nl < 10 * ntimes; nl++) {
    prod = (float) 1.;
    for (int i = 0; i < LEN; i++) {
        prod *= a[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, prod);
}