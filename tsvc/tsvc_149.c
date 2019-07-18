for (int nl = 0; nl < 4 * ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        x = b[i] * c[i] + a[i] * d[i] + e[i];
        a[i] = x - (float) 1.0;
        b[i] = x;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}