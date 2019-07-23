int main() {
for (int nl = 0; nl < ntimes * 10; nl++) {
    for (int i = 0; i < LEN - 5; i += 5) {
        a[i] = a[i + 1] * a[i];
        a[i + 1] = a[i + 2] * a[i + 1];
        a[i + 2] = a[i + 3] * a[i + 2];
        a[i + 3] = a[i + 4] * a[i + 3];
        a[i + 4] = a[i + 5] * a[i + 4];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
