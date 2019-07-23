int main() {
for (int nl = 0; nl < 10 * (ntimes / LEN2); nl++) {
    k = -1;
    for (int i = 0; i < LEN2; i++) {
        for (int j = 0; j < LEN2; j++) {
            if (bb[j][i] > (float) 0.) {
                k++;
                array[k] = aa[j][i];
            }
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
