for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN - 1; i++) {
        if (a[i] >= (float) 0.) {
            goto L20;
        }
        if (b[i] >= (float) 0.) {
            goto L30;
        }
        a[i] += c[i] * d[i];
        L30:
        b[i + 1] = c[i] + d[i] * e[i];
        L20:;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}