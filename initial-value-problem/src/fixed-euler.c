#include "type.h"

points* fixed_euler(initval_problem* prob, points* ps) {
    ps->body[0].x = prob->min;
    ps->body[0].y = prob->initval;

    const double h = prob->h;
    for (int i=1; i<ps->len; i++) {
        double x = ps->body[i-1].x;
        double y = ps->body[i-1].y;
        double k1 = prob->f(x, y);
        double k2 = prob->f(x + h, y + h*k1);

        ps->body[i].x = x + h;
        ps->body[i].y = y + h/2*(k1 + k2);
    }

    return ps;
}
