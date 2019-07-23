int main() {
for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
        A[i][j] = ((DATA_TYPE) i * (j + 2) + 2) / n;
        B[i][j] = ((DATA_TYPE) i * (j + 3) + 3) / n;
    }}
