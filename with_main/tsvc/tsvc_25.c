int main() {
for (int nl = 0; nl < 100 * (ntimes / LEN2); nl++) {
    for (int i = 0; i < LEN2; i++) {
        for (int j = 0; j < LEN2; j++) {
            aa[i][j] = aa[i][j] * cc[j][i] + bb[i][j];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
