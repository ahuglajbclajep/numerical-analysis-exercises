#ifndef ROOTFINDING_BISECTION_H
#define ROOTFINDING_BISECTION_H

#include <math.h>
#include "funcdef.h"

double getCenterInRange(double min, double max) {
    return (min+max)/2;
}

double bisectionMethod(double accuracy) {
    double min = -1, max = 2;

    double x;
    while (1) {
        x = getCenterInRange(min, max);
        double y = f(x);

        if (fabs(y) < accuracy) break;
        if (signbit(y)) {
            min = x;
        } else {
            max = x;
        }
    }

    return x;
}
#endif
