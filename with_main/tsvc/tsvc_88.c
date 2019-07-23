int main() {
for (int nl = 0; nl < ntimes; nl++) {
    for (int i = n1 - 1; i < LEN; i++) {
        k = ip[i];
        a[i] = b[i] + c[LEN - k + 1 - 2] * d[i];
        k += 5;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
