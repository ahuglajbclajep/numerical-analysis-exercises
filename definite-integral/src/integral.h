#ifndef SIMPSONS_RULE_SOLVE_INTEGRAL_H
#define SIMPSONS_RULE_SOLVE_INTEGRAL_H

int trapezoidal_rule(int (*f)(int), int x_min, int x_max);

/* x_min - x_max must be an even number. */
int simpsons_rule(int (*f)(int), int x_min, int x_max);

#endif
