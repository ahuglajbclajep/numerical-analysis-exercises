#ifndef ROOTFINDING_NEWTON_RAPHSON_H
#define ROOTFINDING_NEWTON_RAPHSON_H

#include "funcdef.h"

double getX(double seed) {
    return seed - f(seed)/df(seed);
}

double newtonRaphsonMethod(double accuracy) {
    double x = 2;

    int i;
    for (i=0; i<30; i++) {
        x = getX(x);
    }

    return x;
}

#endif
