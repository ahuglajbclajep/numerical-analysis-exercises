#include <stdbool.h>
#include "util.h"
#include "calculate.h"

void solve_by_gauss_seidel(int n, double a[][n], double *b, double *x) {
    bool convergences[n];

    for (int i=0; i<n; i++) {
        x[i] = 0;
    }

    while (true) {
        for (int i=0; i<n; i++) {
            double new_x = (b[i] - sigma(i, n, a, x)) / a[i][i];
            convergences[i] = is_convergence(new_x, x[i]);
            x[i] = new_x;
        }

        if (all_mach(n, convergences)) break;
    }
}

void solve_by_sor(int n, double a[][n], double *b, double *x) {
    bool convergences[n];

    for (int i=0; i<n; i++) {
        x[i] = 0;
    }

    while (true) {
        for (int i=0; i<n; i++) {
            double new_x = (b[i] - sigma(i, n, a, x)) / a[i][i];
            new_x = sor(new_x, x[i]);
            convergences[i] = is_convergence(new_x, x[i]);
            x[i] = new_x;
        }

        if (all_mach(n, convergences)) break;
    }
}
