int main() {
for (l = 1; l <= loop; l++) {
    t = 0.0037;
    s = 0.0041;
    kn = 6;
    jn = n;
    for (k = 1; k < kn; k++) {
        for (j = 1; j < jn; j++) {
            za[k][j] = (zp[k + 1][j - 1] + zq[k + 1][j - 1] - zp[k][j - 1] - zq[k][j - 1]) *
                       (zr[k][j] + zr[k][j - 1]) / (zm[k][j - 1] + zm[k + 1][j - 1]);
            zb[k][j] = (zp[k][j - 1] + zq[k][j - 1] - zp[k][j] - zq[k][j]) *
                       (zr[k][j] + zr[k - 1][j]) / (zm[k][j] + zm[k][j - 1]);
        }
    }
    for (k = 1; k < kn; k++) {
        for (j = 1; j < jn; j++) {
            zu[k][j] += s * (za[k][j] * (zz[k][j] - zz[k][j + 1]) -
                             za[k][j - 1] * (zz[k][j] - zz[k][j - 1]) -
                             zb[k][j] * (zz[k][j] - zz[k - 1][j]) +
                             zb[k + 1][j] * (zz[k][j] - zz[k + 1][j]));
            zv[k][j] += s * (za[k][j] * (zr[k][j] - zr[k][j + 1]) -
                             za[k][j - 1] * (zr[k][j] - zr[k][j - 1]) -
                             zb[k][j] * (zr[k][j] - zr[k - 1][j]) +
                             zb[k + 1][j] * (zr[k][j] - zr[k + 1][j]));
        }
    }
    for (k = 1; k < kn; k++) {
        for (j = 1; j < jn; j++) {
            zr[k][j] = zr[k][j] + t * zu[k][j];
            zz[k][j] = zz[k][j] + t * zv[k][j];
        }
    }
}}
