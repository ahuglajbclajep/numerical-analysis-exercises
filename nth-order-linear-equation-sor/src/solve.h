#ifndef SOLVE_LINEAR_EQUATION_SOR_SOLVE_H
#define SOLVE_LINEAR_EQUATION_SOR_SOLVE_H

void solve_by_gauss_seidel(int size, double coefficients[size][size], double constants[size], double answers[size]);
void solve_by_sor(int size, double coefficients[size][size], double constants[size], double answers[size]);

#endif
