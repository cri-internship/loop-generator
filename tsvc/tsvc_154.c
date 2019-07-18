for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        if (a[i] < (float) 0.) {
            if (b[i] > a[i]) {
                c[i] += d[i] * e[i];
            }
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}