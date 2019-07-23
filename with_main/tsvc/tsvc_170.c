int main() {
for (int nl = 0; nl < 4 * ntimes; nl++) {
    x = b[LEN - 1];
    for (int i = 0; i < LEN; i++) {
        a[i] = (b[i] + x) * (float) .5;
        x = b[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
