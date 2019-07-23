int main() {
for (int nl = 0; nl < ntimes / 2; nl++) {
    for (int i = 0; i < LEN; i++) {
        switch (indx[i]) {
            case 1:
                goto L15;
            case 2:
                goto L20;
            case 3:
                goto L30;
            case 4:
                goto L40;
        }
        L15:
        a[i] += b[i] * b[i];
        goto L50;
        L20:
        a[i] += c[i] * c[i];
        goto L50;
        L30:
        a[i] += d[i] * d[i];
        goto L50;
        L40:
        a[i] += e[i] * e[i];
        L50:;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
