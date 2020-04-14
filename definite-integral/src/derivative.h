#ifndef SIMPSONS_RULE_DERIVATIVE_H
#define SIMPSONS_RULE_DERIVATIVE_H

double forward_difference(double (*f)(double), double x);
double backward_difference(double (*f)(double), double x);
double central_difference(double (*f)(double), double x);

#endif
