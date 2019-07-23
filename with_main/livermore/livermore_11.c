int main() {
for (l = 1; l <= loop; l++) {
    for (i = 0; i < n; i++) {
        ar = cx[i][4];
        br = ar - px[i][4];
        px[i][4] = ar;
        cr = br - px[i][5];
        px[i][5] = br;
        ar = cr - px[i][6];
        px[i][6] = cr;
        br = ar - px[i][7];
        px[i][7] = ar;
        cr = br - px[i][8];
        px[i][8] = br;
        ar = cr - px[i][9];
        px[i][9] = cr;
        br = ar - px[i][10];
        px[i][10] = ar;
        cr = br - px[i][11];
        px[i][11] = br;
        px[i][13] = cr - px[i][12];
        px[i][12] = cr;
    }
}}
