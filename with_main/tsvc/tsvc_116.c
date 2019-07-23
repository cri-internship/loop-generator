int main() {
for (int nl = 0; nl < 8 * ntimes; nl++) {
    for (int i = 0; i < LEN; i += 5) {
        a[i] += alpha * b[i];
        a[i + 1] += alpha * b[i + 1];
        a[i + 2] += alpha * b[i + 2];
        a[i + 3] += alpha * b[i + 3];
        a[i + 4] += alpha * b[i + 4];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
