for (int nl = 0; nl < 10 * (ntimes / LEN2); nl++) {
    for (int i = 0; i < LEN2; i++) {
        for (int j = 1; j < LEN2; j++) {
            a[j] = (float) 1.0 - a[j - 1];
            cc[j][i] = a[j] + bb[j][i] * d[j];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}