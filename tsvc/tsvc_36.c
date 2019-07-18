for (int nl = 0; nl < 2 * ntimes; nl++) {
    j = -1;
    for (int i = 0; i < LEN / 2; i++) {
        j++;
        a[j] = b[i] + c[i] * d[i];
        j++;
        a[j] = b[i] + d[i] * e[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}