#include "type.h"

points* runge_kutta_4th(initval_problem* prob, points* ps) {
    ps->body[0].x = prob->min;
    ps->body[0].y = prob->initval;

    const double h = prob->h;
    for (int i=1; i<ps->len; i++) {
        double x = ps->body[i-1].x;
        double y = ps->body[i-1].y;
        double k1 = prob->f(x, y);
        double k2 = prob->f(x + h/2, y + h/2*k1);
        double k3 = prob->f(x + h/2, y + h/2*k2);
        double k4 = prob->f(x + h, y + h*k3);

        ps->body[i].x = x + h;
        ps->body[i].y = y + h/6*(k1 + 2*k2 + 2*k3 + k4);
    }

    return ps;
}
