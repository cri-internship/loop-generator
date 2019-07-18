for (int nl = 0; nl < 100 * (ntimes / LEN2); nl++) {
    for (int i = 1; i < LEN2; i++) {
        for (int j = 1; j < LEN2; j++) {
            aa[j][i] = aa[j - 1][i] + cc[j][i];
        }
        for (int j = 1; j < LEN2; j++) {
            bb[j][i] = bb[j][i - 1] + cc[j][i];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}