#ifndef ROOTFINDING_NEWTON_RAPHSON_H
#define ROOTFINDING_NEWTON_RAPHSON_H

#include "funcdef.h"

double get_x_when_y_is_zero(double initial_value) {
    return initial_value - f(initial_value)/df(initial_value);
}

double newton_raphson_method(double accuracy) {
    const int times = 30;
    double x = 2;

    for (int i=0; i<times; i++) {
        x = get_x_when_y_is_zero(x);
        if (f(x) <= accuracy) break;
    }

    return x;
}
#endif
