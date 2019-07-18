for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        a[i] += b[ip[i]] * s;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}