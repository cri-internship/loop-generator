int main() {
for (l = 1; l <= loop; l++) {
    for (k = 0; k < n; k++) {
        x[k] = u[k] + r * (z[k] + r * y[k]) +
               t * (u[k + 3] + r * (u[k + 2] + r * u[k + 1]) +
                    t * (u[k + 6] + r * (u[k + 5] + r * u[k + 4])));
    }
}}
