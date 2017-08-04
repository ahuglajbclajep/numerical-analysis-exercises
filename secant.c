#include <math.h>
#include "type.h"
#include "const.h"

static double new_x(func f, double a, double b) {
    return a - f(a)*(b-a)/(f(b) - f(a));
}

double secant(question q) {
    double min = q.min, max = q.max;

    double x;
    for (int i=0; i<TRIALS; i++) {
        x = new_x(q.f, min, max);
        double y = q.f(x);

        if (fabs(y) <= ACCURACY) break;
        if (signbit(y)) {
            min = x;
        } else {
            max = x;
        }
    }

    return x;
}

