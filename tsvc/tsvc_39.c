for (int nl = 0; nl < 400 * ntimes; nl++) {
    for (int i = 1; i < LEN2; i++) {
        aa[j][i] = aa[k][i - 1] + b[i] * c[1];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}