#ifndef ROOTFINDING_NEWTON_RAPHSON_H
#define ROOTFINDING_NEWTON_RAPHSON_H

#include "funcdef.h"

double getXWhenYIsZero(double initialVal) {
    return initialVal - f(initialVal)/df(initialVal);
}

double newtonRaphsonMethod(double accuracy) {
    const int times = 30;
    double x = 2;

    for (int i=0; i<times; i++) {
        x = getXWhenYIsZero(x);
        if (f(x) <= accuracy) break;
    }

    return x;
}
#endif
