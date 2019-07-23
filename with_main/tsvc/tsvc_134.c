int main() {
for (int nl = 0; nl < ntimes; nl++) {
    x = a[0];
    index = 0;
    for (int i = 0; i < LEN; ++i) {
        if (a[i] > x) {
            x = a[i];
            index = i;
        }
    }
    chksum = x + (float) index;
    dummy(a, b, c, d, e, aa, bb, cc, chksum);
}}
