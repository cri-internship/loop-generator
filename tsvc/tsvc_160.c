for (int nl = 0; nl < 10 * (ntimes / LEN2); nl++) {
    for (int i = 0; i < LEN2; i++) {
        if (aa[0][i] > (float) 0.) {
            for (int j = 1; j < LEN2; j++) {
                aa[j][i] = aa[j - 1][i] + bb[j][i] * cc[j][i];
            }
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}