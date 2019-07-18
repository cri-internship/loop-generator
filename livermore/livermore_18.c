for (l = 1; l <= loop; l++) {
    i = n - 1;
    j = 0;
    ink = -1;
    scale = 5.0 / 3.0;
    xnm = 1.0 / 3.0;
    e6 = 1.03 / 3.07;
    goto l61;
    l60:
    e6 = xnm * vsp[i] + vstp[i];
    vxne[i] = e6;
    xnm = e6;
    ve3[i] = e6;
    i += ink;
    if (i == j) goto l62;
    l61:
    e3 = xnm * vlr[i] + vlin[i];
    xnei = vxne[i];
    vxnd[i] = e6;
    xnc = scale * e3;
    if (xnm > xnc) goto l60;
    if (xnei > xnc) goto l60;
    ve3[i] = e3;
    e6 = e3 + e3 - xnm;
    vxne[i] = e3 + e3 - xnei;
    xnm = e6;
    i += ink;
    if (i != j) goto l61;
    l62:;
}