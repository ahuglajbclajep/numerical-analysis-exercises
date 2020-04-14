#ifndef RUNGE_KUTTA_4TH_UTIL_H
#define RUNGE_KUTTA_4TH_UTIL_H

#include "type.h"

static inline int get_steps(int min, int max, double step) {
    return (int) ((max - min)/step) + 1;
}

void points_to_csv(points*, string file_name);

#endif
