#include <math.h>
#include <stdio.h>
#include "funcdef.h"

double getCenter(double min, double max) {
    return (min+max)/2;
}

int main() {
    double min = -1, max = 2;
    double accuracy = 0.02;

    double center;
    while (1) {
        center = getCenter(min, max);
        double y = f(center);
        if (fabs(y) < accuracy) break;
        if (signbit(y)) {
            min = center;
        } else {
            max = center;
        }
    }

    printf("x = %f", center);
    return 0;
}
