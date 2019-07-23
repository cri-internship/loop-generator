int main() {
for (int nl = 0; nl < ntimes / 2; nl++) {
    for (int i = 2; i < LEN; i++) {
        a[i] = a[i] + a[i - 1] * b[i] + a[i - 2] * c[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
