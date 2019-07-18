for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN; i += 5) {
        a[i] += alpha * b[ip[i]];
        a[i + 1] += alpha * b[ip[i + 1]];
        a[i + 2] += alpha * b[ip[i + 2]];
        a[i + 3] += alpha * b[ip[i + 3]];
        a[i + 4] += alpha * b[ip[i + 4]];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}