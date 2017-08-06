#include "type.h"
#include "const.h"

static double new_x(question q, double x) {
    /*
     * From Taylor expansion
     * 'f(x) = f(x0) + f'(x0)(x - x0) + ...',
     * so 'x = x0 - f(x0)/f'(x0)'.
     */

    return x - q.f(x)/q.df(x);
}

double newton_raphson(question q) {
    double x = q.initval;
    for (int i=0; i<TRIALS; i++) {
        x = new_x(q,x);
        if (q.f(x) <= ACCURACY) break;
    }

    return x;
}
