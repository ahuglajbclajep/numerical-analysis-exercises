#ifndef ROOTFINDING_FUNCDEF_H
#define ROOTFINDING_FUNCDEF_H

#include <math.h>

// When it is an argument of a higher-order function,
// the inline function is output as a normal static function.

static inline double f(double x) {
    return 4*x -x*exp(2*x) +2;
}

static inline double df(double x) {
    return 4 -exp(2*x) -2*x*exp(2*x);
}

static inline double g(double x) {
    return x -cos(x);
}

static inline double dg(double x) {
    return sin(x) +1;
}

#endif
