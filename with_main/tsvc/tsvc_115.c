int main() {
for (int nl = 0; nl < 8 * ntimes; nl++) {
    float *__restrict__ A = a;
    float *__restrict__ B = b;
    float *__restrict__ C = c;
    for (int i = 0; i < LEN; i++) {
        *A = *B + *C;
        A++;
        B++;
        C++;
    }
    dummy(a, b, c, d, e, aa, bb, cc, 0.);
}}
