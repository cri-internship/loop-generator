for (int nl = 0; nl < 4 * (ntimes / LEN); nl++) {
    for (int j = 0; j < (LEN / 2); j++) {
        for (int i = 0; i < m; i++) {
            a[i] += b[i + m - j - 1] * c[j];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}