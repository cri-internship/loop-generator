int main() {
for (int nl = 0; nl < ntimes * 2; nl++) {
    s = 0.;
    for (int i = 0; i < LEN; i++) {
        s += (float) 2.;
        a[i] = s * b[i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
