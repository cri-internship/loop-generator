for (int nl = 0; nl < ntimes; nl++) {
    s = 0.;
    for (int i = 0; i < LEN2; ++i) {
        if (a[i] > 0.) {
            s = d[i] * d[i];
        }
        b[i] = s * c[i] + d[i];
        e[i] = (s + (float) 1.) * aa[0][i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}