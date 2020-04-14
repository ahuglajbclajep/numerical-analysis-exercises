#ifndef SOLVE_LINEAR_EQUATION_SOR_CALCULATE_H
#define SOLVE_LINEAR_EQUATION_SOR_CALCULATE_H

#include <stdbool.h>

double sigma(int roop_counter, int size, double coefficients[size][size], double answers[size]);
double sor(double new_x, double old_x);
bool is_convergence(double new_x, double old_x);

#endif
