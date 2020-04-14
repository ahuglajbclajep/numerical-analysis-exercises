#include <stdlib.h>
#include <stdio.h>
#include "integral.h"
#include "derivative.h"
#include "funcdef.h"

int main() {
    int a = 0, b = 10;
    printf("Integrate 3x^2+3x+6, %d, %d.\n", a, b);
    printf("Answer by trapezoidal rule is %d.\n", trapezoidal_rule(f, a, b));
    printf("Answer by Simpson's rule is %d.\n", simpsons_rule(f, a, b));
    puts("");

    double x = 1.0;
    printf("Differentiate 3x^n+4x+5 and substitute %.lf.\n", x);
    puts("Where n = 2,");
    printf("answer by forward difference is %.8lf,\n", forward_difference(g_2, x));
    printf("answer by backward difference is %.8lf,\n", backward_difference(g_2, x));
    printf("answer by central difference is %.8lf.\n", central_difference(g_2, x));
    puts("");

    puts("Where n = 6,");
    printf("answer by forward difference is %.8lf,\n", forward_difference(g_6, x));
    printf("answer by backward difference is %.8lf,\n", backward_difference(g_6, x));
    printf("answer by central difference is %.8lf.\n", central_difference(g_6, x));
    puts("");

    puts("Where n = 10,");
    printf("answer by forward difference is %.8lf,\n", forward_difference(g_10, x));
    printf("answer by backward difference is %.8lf,\n", backward_difference(g_10, x));
    printf("answer by central difference is %.8lf.\n", central_difference(g_10, x));

    return EXIT_SUCCESS;
}
