for (int nl = 0; nl < 200 * (ntimes / (LEN2)); nl++) {
    for (int i = 0; i < LEN2; i++) {
        for (int j = 0; j < i; j++) {
            aa[i][j] = aa[j][i] + bb[i][j];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}