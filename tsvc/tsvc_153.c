for (int nl = 0; nl < ntimes / 2; nl++) {
    for (int i = 0; i < LEN; i++) {
        if (a[i] > b[i]) {
            a[i] += b[i] * d[i];
            if (LEN > 10) {
                c[i] += d[i] * d[i];
            } else {
                c[i] = d[i] * e[i] + (float) 1.;
            }
        } else {
            b[i] = a[i] + e[i] * e[i];
            if (x > (float) 0.) {
                c[i] = a[i] + d[i] * d[i];
            } else {
                c[i] += e[i] * e[i];
            }
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}