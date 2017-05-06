#include <stdio.h>
#include "bisection.h"
#include "secant.h"
#include "newton-raphson.h"

int main() {
    printf("'4x-xe^(2x)+2 = 0' ");
    printf("solve with Newton-Raphson method.\n");

    printf("x = %.8lf\n", f_newton_raphson());

    printf("'x-cos(x) = 0' ");
    printf("solve with Bisection, Secant & Newton-Raphson method.\n");

    printf("x = %.8lf\n", bisection());
    printf("x = %.8lf\n", secant());
    printf("x = %.8lf\n", g_newton_raphson());

    return 0;
}
