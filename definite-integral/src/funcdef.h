#ifndef SIMPSONS_RULE_FUNCDEF_H
#define SIMPSONS_RULE_FUNCDEF_H

#include <math.h>

// When it is an argument of a higher-order function,
// the inline function is output as a normal static function.

static inline int f(int x) {
    return 3*x*x + 3*x + 6;
}

static inline double g(double x, int n) {
    return 3*pow(x, n) + 4*x + 5;
}

static inline double g_2(double x) {
    return g(x, 2);
}

static inline double g_6(double x) {
    return g(x, 6);
}

static inline double g_10(double x) {
    return g(x, 10);
}

#endif
