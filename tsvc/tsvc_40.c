for (int nl = 0; nl < 200 * (ntimes / LEN2); nl++) {
    for (int i = 0; i < LEN2; i++) {
        k = (i + 1) * ((i + 1) - 1) / 2 + (i + 1) - 1;
        for (int j = i; j < LEN2; j++) {
            array[k] += bb[j][i];
            k += j + 1;
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}