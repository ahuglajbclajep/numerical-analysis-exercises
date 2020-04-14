int simpsons_rule(int (*f)(int), int a0, int an) {
    // h is defined by h = (b-a)/n.
    // n is the number of split interval[a, b], with n an even number.
    // When splitting by integer range, h is always 1 (n = b-a).
    int h = 1;

    int sum = 0;
    for (int x = a0+1; x < an; x++) {
        if (x%2 == 0) {
            sum += 2*f(x);
        } else {
            sum += 4*f(x);
        }
    }

    return (f(a0) + sum + f(an)) * h/3;
}
