int main() {
for (int nl = 0; nl < ntimes / 2; nl++) {
    sum = 0.;
    for (int i = 0; i < LEN; i++) {
        if (a[i] > (float) 0.) {
            sum += a[i];
        }
    }
    dummy(a, b, c, d, e, aa, bb, cc, sum);
}}
