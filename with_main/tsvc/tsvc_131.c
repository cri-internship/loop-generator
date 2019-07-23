int main() {
for (int nl = 0; nl < ntimes / 2; nl++) {
    k = 0;
    index = 0;
    max = abs(a[0]);
    k += inc;
    for (int i = 1; i < LEN; i++) {
        if (abs(a[k]) <= max) {
            goto L5;
        }
        index = i;
        max = abs(a[k]);
        L5:
        k += inc;
    }
    chksum = max + (float) index;
    dummy(a, b, c, d, e, aa, bb, cc, chksum);
}}
