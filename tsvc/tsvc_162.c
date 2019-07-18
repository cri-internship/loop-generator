for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        a[i] += d[i] * e[i];
        if (a[i] < (float) 0.)
            b[i] += d[i] * e[i];
        c[i] += a[i] * d[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}