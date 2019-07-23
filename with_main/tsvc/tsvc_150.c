int main() {
for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        x = a[LEN - i - 1] + b[i] * c[i];
        a[i] = x - (float) 1.0;
        b[i] = x;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
