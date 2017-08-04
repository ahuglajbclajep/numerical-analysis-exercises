#include <math.h>
#include <stdbool.h>
#include "funcdef.h"
#include "const.h"

static inline double midpoint(double a, double b) {
    return (a+b)/2;
}

double bisection() {
    double min = G_RANGE_MIN, max = G_RANGE_MAX;

    double x;
    while (true) {
        x = midpoint(min, max);
        double y = g(x);

        if (fabs(y) <= ACCURACY) break;
        if (signbit(y)) {
            min = x;
        } else {
            max = x;
        }
    }

    return x;
}
