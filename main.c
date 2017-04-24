#include <stdio.h>
#include "bisection.h"
#include "newton_raphson.h"

int main() {
    double accuracy = 0.02;

    printf("x = %f", newtonRaphsonMethod(accuracy));
    return 0;
}
