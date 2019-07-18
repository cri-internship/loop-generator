for (int nl = 0; nl < 2 * ntimes; nl++) {
    j = -1;
    for (int i = 0; i < LEN / 2; i++) {
        k = j + 1;
        a[i] = b[k] - d[i];
        j = k + 1;
        b[k] = a[i] + c[k];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 1.);
}