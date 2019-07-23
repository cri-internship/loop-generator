int main() {
for (int nl = 0; nl < 2 * ntimes; nl++) {
    for (int i = 1; i < LEN; i += 2) {
        a[i] = a[i - 1] + b[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
