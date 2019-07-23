int main() {
for (int nl = 0; nl < ntimes; nl++) {
    for (int i = 0; i < LEN; i++) {
        a[i] = c[i] + e[i] * d[i];
        if (a[i] > (float) 0.) {
            b[i] = a[i] + b[i];
        } else {
            a[i] = d[i] * e[i];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
