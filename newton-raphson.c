#include "funcdef.h"
#include "const.h"

static double f_get_x_when_y_is_zero(double initial_value) {
    return initial_value - f(initial_value)/df(initial_value);
}

static double g_get_x_when_y_is_zero(double initial_value) {
    return initial_value - g(initial_value)/dg(initial_value);
}

double f_newton_raphson() {
    double x = NEWTON_RAPHSON_INITIAL_VALUE;
    for (int i=0; i<TRIALS; i++) {
        x = f_get_x_when_y_is_zero(x);
        if (f(x) <= ACCURACY) break;
    }

    return x;
}

double g_newton_raphson() {
    double x = NEWTON_RAPHSON_INITIAL_VALUE;
    for (int i=0; i<TRIALS; i++) {
        x = g_get_x_when_y_is_zero(x);
        if (g(x) <= ACCURACY) break;
    }

    return x;
}
