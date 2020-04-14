#ifndef RUNGE_KUTTA_4TH_INIT_VAL_PROBLEM_H
#define RUNGE_KUTTA_4TH_INIT_VAL_PROBLEM_H

#include "type.h"

points* euler(initval_problem*, points*);
points* fixed_euler(initval_problem*, points*);
points* runge_kutta_4th(initval_problem*, points*);

#endif
