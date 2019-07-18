for (l = 1; l <= loop; l++) {
    x[0] = y[0];
    for (k = 1; k < n; k++) {
        x[k] = x[k - 1] + y[k];
    }
}