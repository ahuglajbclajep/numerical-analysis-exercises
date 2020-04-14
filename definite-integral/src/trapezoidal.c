static int trapezoid_area(int (*f)(int), int a, int b) {
    return (f(a) + f(b)) * (b-a) / 2;
}

int trapezoidal_rule(int (*f)(int), int a0, int an) {
    int sum = 0;
    int old_x = a0;
    for (int x = a0+1; x <= an; x++) {
        sum += trapezoid_area(f, old_x, x);
        old_x = x;
    }

    return sum;
}
