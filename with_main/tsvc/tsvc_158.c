int main() {
for (int nl = 0; nl < 4 * ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        if (i + 1 < mid) {
            a[i] += b[i] * c[i];
        } else {
            a[i] += b[i] * d[i];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
