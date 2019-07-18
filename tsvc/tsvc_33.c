for (int nl = 0; nl < ntimes; nl++) {
    j = -1;
    for (int i = 0; i < LEN; i++) {
        if (b[i] > (float) 0.) {
            j++;
            a[j] = b[i] + d[i] * e[i];
        } else {
            j++;
            a[j] = c[i] + d[i] * e[i];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}