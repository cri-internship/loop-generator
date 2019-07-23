int main() {
for (l = 1; l <= loop; l++) {
    for (k = 0; k < n; k++) {
        b5[k + kb5i] = sa[k] + stb5 * sb[k];
        stb5 = b5[k + kb5i] - stb5;
    }
    for (i = 1; i <= n; i++) {
        k = n - i;
        b5[k + kb5i] = sa[k] + stb5 * sb[k];
        stb5 = b5[k + kb5i] - stb5;
    }
}}
