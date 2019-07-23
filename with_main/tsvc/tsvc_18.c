int main() {
for (int nl = 0; nl < 2 * ntimes; nl++) {
    for (int i = 0; i < LEN / 2; i++) {
        a[2 * i] = c[i] * b[i] + d[i] * b[i] + c[i] * c[i] + d[i] * b[i] + d[i] * c[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
