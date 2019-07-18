for (int nl = 0; nl < 100 * (ntimes / LEN2); nl++) {
    for (int i = 0; i < LEN2; i++) {
        for (int j = 0; j < LEN2; j++) {
            aa[j][i] = (float) 0.;
        }
        aa[i][i] = (float) 1.;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}