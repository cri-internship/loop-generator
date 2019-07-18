for (int nl = 0; nl < 200 * (ntimes / LEN2); nl++) {
    for (int i = 1; i < LEN2; i++) {
        for (int j = 0; j <= i - 1; j++) {
            a[i] += bb[j][i] * a[i - j - 1];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}