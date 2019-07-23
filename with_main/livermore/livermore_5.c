int main() {
for (l = 1; l <= loop; l++) {
    for (k = 6; k < 1001; k = k + m) {
        lw = k - 6;
        temp = x[k - 1];
        for (j = 4; j < n; j = j + 5) {
            temp -= x[lw] * y[j];
            lw++;
        }
        x[k - 1] = y[4] * temp;
    }
}}
