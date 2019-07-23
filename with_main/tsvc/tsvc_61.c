int main() {
for (int nl = 0; nl < 100 * (ntimes / LEN2); nl++) {
    for (int j = 0; j < LEN2; j++) {
        for (int i = j; i < LEN2; i++) {
            aa[i][j] = bb[i][j] + cc[i][j];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 1.);
}}
