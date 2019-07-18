for (int nl = 0; nl < ntimes; nl++) {
    j = 1;
    k = 0;
    for (int i = n1 - 1; i < LEN; i += n3) {
        k += j;
        a[i] += b[LEN - k];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}