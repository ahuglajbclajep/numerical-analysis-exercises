#include "const.h"

double forward_difference(double (*f)(double), double x) {
    return (f(x+H) - f(x)) / H;
}

double backward_difference(double (*f)(double), double x) {
    return (f(x) - f(x-H)) / H;
}

double central_difference(double (*f)(double), double x) {
    return (f(x+H) - f(x-H)) / (2*H);
}
