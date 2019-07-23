int main() {
for (int nl = 0; nl < ntimes; nl++) {
    sum = (float) 0.0;
    for (int i = 0; i < LEN; i++) {
        sum += a[i];
        b[i] = sum;
    }
    dummy(a, b, c, d, e, aa, bb, cc, sum);
}}
