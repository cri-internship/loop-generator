for(int k=1; k<M-1; ++k)
    for(int j=1; j<N-1; ++j)
        for(int i=1; i<N-1; ++i)
            b[k][j][i] = ( a[k][j][i-1] + a[k][j][i+1]
                         + a[k][j-1][i] + a[k][j+1][i]
                         + a[k-1][j][i] + a[k+1][j][i]) * s;

swap(a, b);
