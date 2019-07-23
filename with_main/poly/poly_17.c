int main() {
for (i = 0; i < nx; i++)
    for (j = 0; j < ny; j++) {
        ex[i][j] = ((DATA_TYPE) i * (j + 1)) / nx;
        ey[i][j] = ((DATA_TYPE) i * (j + 2)) / ny;
        hz[i][j] = ((DATA_TYPE) i * (j + 3)) / nx;
    }}
