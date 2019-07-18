for (int nl = 0; nl < ntimes; nl++) {
    for (int i = n1 - 1; i < LEN; i += n3) {
        a[i] += b[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}