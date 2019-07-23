int main() {
for (int nl = 0; nl < 2 * ntimes; nl++) {
    sum = 0.;
    for (int i = 0; i < LEN; i++) {
        a[i] = c[i] + d[i];
        sum += a[i];
        b[i] = c[i] + e[i];
        sum += b[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, sum);
}}
