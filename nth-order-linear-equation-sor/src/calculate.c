#include <math.h>
#include <stdbool.h>
#include "const.h"

double sigma(int count, int n, double a[][n], double *x) {
    double sum = 0;
    for (int i=0; i<=n; i++) {
        if (i == count) continue;
        sum += a[count][i] * x[i];
    }
    return sum;
}

double sor(double new_x, double old_x) {
    return (1-RELAXATION_FACTOR) * old_x + RELAXATION_FACTOR * new_x;
}

bool is_convergence(double new_x, double old_x) {
    return fabs((new_x - old_x)) <= ACCURACY * fabs(old_x);
}
