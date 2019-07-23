int main() {
for(int j=1 ; j<M-1; j++) {
  for(int k=1 ; k<N-1; k++){
        s0 = a[i][j][k][0]*p[i+1][j][k]
            + a[i][j][k][1]*p[i][j+1][k]
            + a[i][j][k][2]*p[i][j][k+1]
            + b[i][j][k][0]
            *( p[i+1][j+1][k] - p[i+1][j-1][k]
              - p[i-1][j+1][k] + p[i-1][j-1][k] )
            + b[i][j][k][1]
            *( p[i][j+1][k+1] - p[i][j-1][k+1]
              - p[i][j+1][k-1] + p[i][j-1][k-1] )
            + b[i][j][k][2]
            *( p[i+1][j][k+1] - p[i-1][j][k+1]
              - p[i+1][j][k-1] + p[i-1][j][k-1] )
            + c[i][j][k][0] * p[i-1][j][k]
            + c[i][j][k][1] * p[i][j-1][k]
            + c[i][j][k][2] * p[i][j][k-1]
            + wrk1[i][j][k];

        ss = (s0*a[i][j][k][3] - p[i][j][k])*bnd[i][j][k];

        gosa += ss*ss;
        wrk2[i][j][k] = p[i][j][k] + omega*ss;
  }
}


}
