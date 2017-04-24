#ifndef ROOTFINDING_BISECTION_H
#define ROOTFINDING_BISECTION_H

#include <math.h>
#include "funcdef.h"

double getCenter(double minInRange, double maxInRange) {
    return (minInRange+maxInRange)/2;
}

double bisectionMethod(double accuracy) {
    double minInRange = -1, maxInRange = 2;

    double x;
    while (1) {
        x = getCenter(minInRange, maxInRange);
        double y = f(x);

        if (fabs(y) < accuracy) break;
        if (signbit(y)) {
            minInRange = x;
        } else {
            maxInRange = x;
        }
    }

    return x;
}
#endif
