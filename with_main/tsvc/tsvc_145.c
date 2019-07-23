int main() {
for (int nl = 0; nl < 10 * ntimes; nl++) {
    for (int i = 0; i < LEN2; i++) {
        aa[i][i] += bb[i][i] * cc[i][i];
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
