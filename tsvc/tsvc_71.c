for (int nl = 0; nl < ntimes * 10; nl++) {
    for (int i = 0; i < LEN2; i++) {
        a1 = a[i];
        b1 = b[i];
        c1 = c[i];
        d1 = d[i];
        e1 = e[i];
        f1 = aa[0][i];
        a1 = a1 * b1 * c1 + a1 * b1 * d1 + a1 * b1 * e1 + a1 * b1 * f1 +
                a1 * c1 * d1 + a1 * c1 * e1 + a1 * c1 * f1 + a1 * d1 * e1
                + a1 * d1 * f1 + a1 * e1 * f1;
        b1 = b1 * c1 * d1 + b1 * c1 * e1 + b1 * c1 * f1 + b1 * d1 * e1 +
                b1 * d1 * f1 + b1 * e1 * f1;
        c1 = c1 * d1 * e1 + c1 * d1 * f1 + c1 * e1 * f1;
        d1 = d1 * e1 * f1;
        x[i] = a1 * b1 * c1 * d1;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}