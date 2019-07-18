for (l = 1; l <= loop; l++) {
    for (i = 0; i < n; i++) {
        px[i][0] = dm28 * px[i][12] + dm27 * px[i][11] + dm26 * px[i][10] +
                   dm25 * px[i][9] + dm24 * px[i][8] + dm23 * px[i][7] +
                   dm22 * px[i][6] + c0 * (px[i][4] + px[i][5]) + px[i][2];
    }
}