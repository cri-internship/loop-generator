for (int nl = 0; nl < ntimes; nl++) {
    t = (float) 0.;
    for (int i = 0; i < LEN; i++) {
        s = b[i] * c[i];
        a[i] = s + t;
        t = s;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}