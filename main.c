#include <stdio.h>
#include "bisection.h"

int main() {
    double accuracy = 0.02;

    printf("x = %f", bisectionMethod(accuracy));
    return 0;
}
