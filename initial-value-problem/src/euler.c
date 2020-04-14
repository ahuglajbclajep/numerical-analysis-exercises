#include "type.h"

points* euler(initval_problem* prob, points* ps) {
    ps->body[0].x = prob->min;
    ps->body[0].y = prob->initval;

    for (int i=1; i<ps->len; i++) {
        double x = ps->body[i-1].x;
        double y = ps->body[i-1].y;

        ps->body[i].x = x + prob->h;
        ps->body[i].y = y + prob->h * prob->f(x, y);
    }

    return ps;
}
