int main() {
for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 1; i < LEN; i++) {
        a[i] += a[i - 1] * b[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
