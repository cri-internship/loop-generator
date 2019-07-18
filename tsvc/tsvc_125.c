for (int nl = 0; nl < ntimes * 4; nl++) {
    max = abs(a[0]);
    for (int i = 0; i < LEN; i++) {
        if ((abs(a[i])) > max) {
            max = abs(a[i]);
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, max);
}