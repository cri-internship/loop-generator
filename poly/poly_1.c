for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
        u[i][j] = (DATA_TYPE)(i + n - j) / n;
    }