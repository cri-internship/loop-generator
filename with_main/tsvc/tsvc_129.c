int main() {
for (int nl = 0; nl < 100 * (ntimes / (LEN2)); nl++) {
    max = aa[(0)][0];
    xindex = 0;
    yindex = 0;
    for (int i = 0; i < LEN2; i++) {
        for (int j = 0; j < LEN2; j++) {
            if (aa[i][j] > max) {
                max = aa[i][j];
                xindex = i;
                yindex = j;
            }
        }
    }
    chksum = max + (float) xindex + (float) yindex;
    dummy(a, b, c, d, e, aa, bb, cc, chksum);
}}
