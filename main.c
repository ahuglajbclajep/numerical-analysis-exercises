#include <stdio.h>
#include "bisection.h"
#include "secant.h"
#include "newton-raphson.h"

int main() {
    const double accuracy = 0.00001;

    printf("4x-xe^(2x)+2 = 0\n");
    printf("solve with Newton-Raphson method.\n");

    double answer = newton_raphson_method(accuracy);
    printf("x = %.8lf\n", answer);

    return 0;
}
