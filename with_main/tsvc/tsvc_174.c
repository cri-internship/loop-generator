int main() {
for (int nl = 0; nl < ntimes; nl++) {
    float s = (float) 0.0;
    for (int i = 0; i < LEN; i++) {
        a[i] = s * e[i];
        s = b[i] + c[i];
        b[i] = a[i] + d[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
