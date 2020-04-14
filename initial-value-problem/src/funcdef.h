#ifndef RUNGE_KUTTA_4TH_FUNCDEF_H
#define RUNGE_KUTTA_4TH_FUNCDEF_H

#include <math.h>

// When it is an argument of a higher-order function,
// the inline function is output as a normal static function.

static inline double f(double x, double y) { // is y'.
    return y;
}

static inline double g(double x, double y) {
    return exp(x) + 2*y;
}

static inline double h(double x, double y) {
    return x * y * (1-x);
}

static inline double i(double x, double y) {
    return x * x * (y+1);
}

#endif
