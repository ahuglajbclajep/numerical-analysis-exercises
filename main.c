#include <math.h>
#include <stdlib.h>
#include <stdio.h>

double originInput(double x) {
    return x*x-2;
}

double input(double x) {
    return 2*x;
}

double getCenter(double x1, double x2) {
    return (x1 + x2) / 2;
}

int main() {
    double max = 2;
    double min = -1;
    double tmp = 0.2;

    printf("%f", getCenter(max, min));

    double y;
    while (1) {
        y = originInput(getCenter(max, min));
        printf("%f", y);
        if (fabs(y) < tmp) break;
        if (signbit(y)) {
            min = y;
        } else {
            max = y;
        }
    }

    printf("%f", y);
    return EXIT_SUCCESS;
}
