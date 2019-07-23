int main() {
for (int nl = 0; nl < 100 * (ntimes / (LEN2)); nl++) {
    k = -1;
    for (int i = 0; i < LEN2; i++) {
        for (int j = 0; j < LEN2; j++) {
            k++;
            array[k] = aa[i][j] + bb[i][j] * cc[i][j];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
