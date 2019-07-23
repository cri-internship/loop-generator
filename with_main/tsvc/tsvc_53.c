int main() {
for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 1; i < LEN - 1; i++) {
        a[i] = b[i - 1] + c[i] * d[i];
        b[i] = b[i + 1] - e[i] * d[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
