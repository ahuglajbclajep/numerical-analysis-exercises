#include "funcdef.h"
#include "const.h"

static double get_x_when_y_is_zero(double min, double max) {
    return min - g(min)*(max-min)/(g(max)-g(min));
}

double secant() {
    double min = MIN, max = MAX;

    double x;
    for (int i=0; i<TRIALS; i++) {
        x = get_x_when_y_is_zero(min, max);
        double y = g(x);

        if (fabs(y) <= ACCURACY) break;
        if (signbit(y)) {
            min = x;
        } else {
            max = x;
        }
    }

    return x;
}

