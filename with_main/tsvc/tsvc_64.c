int main() {
for (int nl = 0; nl < 200 * (ntimes / LEN2); nl++) {
    for (int i = 0; i < LEN2; i++) {
        a[i] += b[i] * c[i];
        for (int j = 1; j < LEN2; j++) {
            aa[j][i] = aa[j - 1][i] + bb[j][i] * a[i];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
