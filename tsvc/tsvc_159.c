for (int nl = 0; nl < 100 * (ntimes / LEN2); nl++) {
    for (int i = 0; i < LEN2; i++) {
        for (int j = 0; j < LEN2; j++) {
            aa[j][i] = aa[j][i] + bb[j][i] * cc[j][i];
        }
        a[i] = b[i] + c[i] * d[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}