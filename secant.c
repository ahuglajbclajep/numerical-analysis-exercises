#include "funcdef.h"
#include "const.h"

static double get_x_when_y_is_zero(double min, double max) {
    return min - f(min)*(max-min)/(f(max)-f(min));
}

double secant() {
    double min = -1, max = 2;

    double x;
    for (int i=0; i<TRIALS; i++) {
        x = get_x_when_y_is_zero(min, max);
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

