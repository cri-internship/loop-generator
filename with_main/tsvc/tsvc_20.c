int main() {
for (int nl = 0; nl < ntimes * 3; nl++) {
    for (int i = LEN - 1; i >= 0; i--) {
        a[i] = b[i] + (float) 1.;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
