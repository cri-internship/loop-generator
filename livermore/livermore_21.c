for (l = 1; l <= loop; l++) {
    for (k = 0; k < n; k++) {
        di = y[k] - g[k] / (xx[k] + dk);
        dn = 0.2;
        if (di) {
            dn = z[k] / di;
            if (t < dn) dn = t;
            if (s > dn) dn = s;
        }
        x[k] = ((w[k] + v[k] * dn) * xx[k] + u[k]) / (vx[k] + v[k] * dn);
        xx[k + 1] = (x[k] - xx[k]) * dn + xx[k];
    }
}