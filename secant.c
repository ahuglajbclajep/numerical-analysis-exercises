#include <math.h>
#include "type.h"
#include "const.h"

static double new_x(func f, double a, double b) {
    /*
     * Slope of the road between (a,f(a)) and (b,f(b)) is '(f(b)-f(a))/(b-a)'.
     * The equation of this straight line is 'y = ((f(b)-f(a))/(b-a))*x +f(a) - ((f(b)-f(a))/(b-a))*a'.
     * When y = 0, x can be expressed as follows.
     */

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

