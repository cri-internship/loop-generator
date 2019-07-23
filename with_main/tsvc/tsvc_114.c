int main() {
for (int nl = 0; nl < 8 * ntimes; nl++) {
    dot = (float) 0.;
    for (int i = 0; i < LEN; i += 5) {
        dot = dot + a[i] * b[i] + a[i + 1] * b[i + 1] + a[i + 2]
                                                        * b[i + 2] + a[i + 3] * b[i + 3] + a[i + 4] * b[i + 4];
    }
    dummy(a, b, c, d, e, aa, bb, cc, dot);
}}
