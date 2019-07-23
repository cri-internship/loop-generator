int main() {
for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        if (d[i] < (float) 0.) {
            exit(0);
        }
        a[i] += b[i] * c[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
