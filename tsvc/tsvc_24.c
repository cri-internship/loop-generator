for (int nl = 0; nl < 1000 * (ntimes / LEN2); nl++) {
    for (int j = 0; j < LEN2; j++) {
        for (int i = j + 1; i < LEN2; i++) {
            a[i] -= aa[j][i] * a[j];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}