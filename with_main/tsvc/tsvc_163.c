int main() {
for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        if (e[i] >= t) {
            a[i] += c[i] * d[i];
            b[i] += c[i] * c[i];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
