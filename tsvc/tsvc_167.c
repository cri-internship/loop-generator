for (int nl = 0; nl < 10 * (ntimes / LEN2); nl++) {
    for (int i = 1; i < LEN2; i++) {
        for (int j = 0; j < LEN2; j++) {
            a[i] = aa[j][i] - a[i - 1];
            aa[j][i] = a[i] + bb[j][i];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}