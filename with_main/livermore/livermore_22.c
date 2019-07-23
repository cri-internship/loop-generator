int main() {
for (l = 1; l <= loop; l++) {
    for (k = 0; k < 25; k++) {
        for (i = 0; i < 25; i++) {
            for (j = 0; j < n; j++) {
                px[j][i] += vy[k][i] * cx[j][k];
            }
        }
    }
}}
