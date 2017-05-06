#ifndef ROOTFINDING_BISECTION_H
#define ROOTFINDING_BISECTION_H

#include "funcdef.h"
#include "const.h"

double get_center_in_range(double min, double max) {
    return (min+max)/2;
}

double bisection() {
    double min = -1, max = 2;

    double x;
    while (1) {
        x = get_center_in_range(min, max);
        double y = f(x);

        if (fabs(y) <= ACCURACY) break;
        if (signbit(y)) {
            min = x;
        } else {
            max = x;
        }
    }

    return x;
}
#endif
