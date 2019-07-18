for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        if (a[i] > b[i]) {
            s = a[i] - b[i] * d[i];
            c[i] += s;
            a[i] = s;
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}