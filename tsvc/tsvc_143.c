for (int nl = 0; nl < 100 * (ntimes / (LEN2)); nl++) {
    for (int j = 1; j < LEN2; j++) {
        for (int i = 1; i < LEN2; i++) {
            aa[j][i] = aa[j][i - 1] + aa[j - 1][i];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}