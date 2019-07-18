for (int nl = 0; nl < ntimes * 10; nl++) {
    sum = 0.;
    for (int i = 0; i < LEN; i++) {
        sum += a[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, sum);
}