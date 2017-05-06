#ifndef ROOTFINDING_FUNCDEF_H
#define ROOTFINDING_FUNCDEF_H

#include <math.h>

static double f(double x) {
    return 4*x-x*exp(2*x)+2;
}

static double df(double x) {
    return 4-exp(2*x)-2*x*exp(2*x);
}

#endif
