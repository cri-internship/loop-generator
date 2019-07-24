int main() {
for(int i=0; i<N; ++i) {
    a[i] = b[y];
    prod = a[i]*b[i];
    y = prod-c;
    t = sum+y;
    c = (t-sum)-y;
    sum = t;
}
}