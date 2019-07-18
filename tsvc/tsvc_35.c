for (int nl = 0; nl < 10 * (ntimes / LEN2); nl++) {
    k = 1;
    for (int i = 0; i < LEN2; i++) {
        for (int j = 1; j < LEN2; j++) {
            bb[j][i] = bb[j - 1][i] + array[k - 1] * cc[j][i];
            ++k;
        }
        ++k;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}