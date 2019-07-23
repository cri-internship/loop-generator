int main() {
for (t = 0; t <= _PB_TSTEPS - 1; t++)
    for (i = 1; i <= _PB_N - 2; i++)
        for (j = 1; j <= _PB_N - 2; j++)
            A[i][j] = (A[i - 1][j - 1] + A[i - 1][j] + A[i - 1][j + 1]
                       + A[i][j - 1] + A[i][j] + A[i][j + 1]
                       + A[i + 1][j - 1] + A[i + 1][j] + A[i + 1][j + 1]) / SCALAR_VAL(9.0);}
