for (int nl = 0; nl < ntimes / 2; nl++) {
    for (int i = 0; i < LEN; i++) {
        if (a[i] > (float) 0.) {
            goto L20;
        }
        b[i] = -b[i] + d[i] * d[i];
        if (b[i] <= a[i]) {
            goto L30;
        }
        c[i] += d[i] * e[i];
        goto L30;
        L20:
        c[i] = -c[i] + e[i] * e[i];
        L30:
        a[i] = b[i] + c[i] * d[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}