int main() {
for (l = 1; l <= loop; l++) {
    ii = n;
    ipntp = 0;
    do {
        ipnt = ipntp;
        ipntp += ii;
        ii /= 2;
        i = ipntp - 1;
        for (k = ipnt + 1; k < ipntp; k = k + 2) {
            i++;
            x[i] = x[k] - v[k] * x[k - 1] - v[k + 1] * x[k + 1];
        }
    } while (ii > 0);
}}
