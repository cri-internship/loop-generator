for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
        if ((i * n + j) % 20 == 0) fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf(POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, u[i][j]);
    }