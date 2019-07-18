for (l = 1; l <= loop; l++) {
    i1 = m = 1;
    label410:
    j2 = (n + n) * (m - 1) + 1;
    for (k = 1; k <= n; k++) {
        k2++;
        j4 = j2 + k + k;
        j5 = zone[j4 - 1];
        if (j5 < n) {
            if (j5 + lb < n) {              /* 420 */
                tmp = plan[j5 - 1] - t;       /* 435 */
            } else {
                if (j5 + ii < n) {          /* 415 */
                    tmp = plan[j5 - 1] - s;   /* 430 */
                } else {
                    tmp = plan[j5 - 1] - r;   /* 425 */
                }
            }
        } else if (j5 == n) {
            break;                          /* 475 */
        } else {
            k3++;                           /* 450 */
            tmp = (d[j5 - 1] - (d[j5 - 2] * (t - d[j5 - 3]) * (t - d[j5 - 3]) + (s - d[j5 - 4]) *
                                                                                (s - d[j5 - 4]) +
                                (r - d[j5 - 5]) * (r - d[j5 - 5])));
        }
        if (tmp < 0.0) {
            if (zone[j4 - 2] < 0)           /* 445 */
                continue;                   /* 470 */
            else if (!zone[j4 - 2])
                break;                      /* 480 */
        } else if (tmp) {
            if (zone[j4 - 2] > 0)           /* 440 */
                continue;                   /* 470 */
            else if (!zone[j4 - 2])
                break;                      /* 480 */
        } else break;                       /* 485 */
        m++;                                /* 455 */
        if (m > zone[0])
            m = 1;                          /* 460 */
        if (i1 - m)                         /* 465 */
            goto label410;
        else
            break;
    }
}