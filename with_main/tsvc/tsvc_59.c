int main() {
for (int nl = 0; nl < 100 * (ntimes / LEN2); nl++) {
    for (int i = 0; i < LEN2; ++i) {
        for (int j = 1; j < LEN2; j++) {
            aa[j][i] = aa[j - 1][i] + bb[j][i];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
