for (l = 1; l <= loop; l++) {
    for (j = 1; j < 6; j++) {
        for (k = 1; k < n; k++) {
            qa = za[j + 1][k] * zr[j][k] + za[j - 1][k] * zb[j][k] +
                 za[j][k + 1] * zu[j][k] + za[j][k - 1] * zv[j][k] + zz[j][k];
            za[j][k] += 0.175 * (qa - za[j][k]);
        }
    }
}