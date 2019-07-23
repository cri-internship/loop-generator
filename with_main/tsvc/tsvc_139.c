int main() {
for (int nl = 0; nl < 2000 * ntimes; nl++) {
    sum = (float) 0.;
    sum += test(a);
    sum += test(&a[4]);
    sum += test(&a[8]);
    sum += test(&a[12]);
    sum += test(&a[16]);
    sum += test(&a[20]);
    sum += test(&a[24]);
    sum += test(&a[28]);
    dummy(a, b, c, d, e, aa, bb, cc, sum);
}}
