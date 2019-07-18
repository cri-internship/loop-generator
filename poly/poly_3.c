for (t = 1; t <= _PB_TSTEPS; t++) {
    //Column Sweep
    for (i = 1; i < _PB_N - 1; i++) {
        v[0][i] = SCALAR_VAL(1.0);
        p[i][0] = SCALAR_VAL(0.0);
        q[i][0] = v[0][i];
        for (j = 1; j < _PB_N - 1; j++) {
            p[i][j] = -c / (a * p[i][j - 1] + b);
            q[i][j] = (-d * u[j][i - 1] + (SCALAR_VAL(1.0) + SCALAR_VAL(2.0) * d) * u[j][i] - f * u[j][i + 1] -
                       a * q[i][j - 1]) / (a * p[i][j - 1] + b);
        }

        v[_PB_N - 1][i] = SCALAR_VAL(1.0);
        for (j = _PB_N - 2; j >= 1; j--) {
            v[j][i] = p[i][j] * v[j + 1][i] + q[i][j];
        }
    }
    //Row Sweep
    for (i = 1; i < _PB_N - 1; i++) {
        u[i][0] = SCALAR_VAL(1.0);
        p[i][0] = SCALAR_VAL(0.0);
        q[i][0] = u[i][0];
        for (j = 1; j < _PB_N - 1; j++) {
            p[i][j] = -f / (d * p[i][j - 1] + e);
            q[i][j] = (-a * v[i - 1][j] + (SCALAR_VAL(1.0) + SCALAR_VAL(2.0) * a) * v[i][j] - c * v[i + 1][j] -
                       d * q[i][j - 1]) / (d * p[i][j - 1] + e);
        }
        u[i][_PB_N - 1] = SCALAR_VAL(1.0);
        for (j = _PB_N - 2; j >= 1; j--) {
            u[i][j] = p[i][j] * u[i][j + 1] + q[i][j];
        }
    }
}