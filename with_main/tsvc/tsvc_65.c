int main() {
for (int nl = 0; nl < 2 * ntimes; nl++) {
    for (int i = 0; i < LEN - 1; i++) {
        a[i] = b[i] * c[i] * d[i];
        b[i] = a[i] * a[i + 1] * d[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
