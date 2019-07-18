for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
        for (k = 0; k < n; k++)
            A[i][j][k] = B[i][j][k] = (DATA_TYPE)(i + j + (n - k)) * 10 / (n);