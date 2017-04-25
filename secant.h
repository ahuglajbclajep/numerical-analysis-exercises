#ifndef ROOTFINDING_SECANT_H
#define ROOTFINDING_SECANT_H

#include <math.h>
#include "funcdef.h"

double secant_get_x_when_y_is_zero(double min, double max) {
    return min - f(min)*(max-min)/(f(max)-f(min));
}

double secant_method(double accuracy) {
    const int times = 30;
    double min = -1, max = 2;

    double x;
    for (int i=0; i<times; i++) {
        x = secant_get_x_when_y_is_zero(min, max);
        double y = f(x);

        if (fabs(y) <= accuracy) break;
        if (signbit(y)) {
            min = x;
        } else {
            max = x;
        }
    }

    return x;
}
#endif
