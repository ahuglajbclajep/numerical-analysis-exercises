#include <stdlib.h>
#include <stdio.h>
#include "util.h"
#include "solve.h"

int main() {
    puts("Please enter the dimension.");
    int n;
    scanf("%d", &n);

    double a[n][n];
    double b[n];
    double x[n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("Please enter the coefficient [%d][%d].\n", i+1, j+1);
            scanf("%lf", &a[i][j]);
        }
    }
    for (int i=0; i<n; i++) {
        printf("Please enter the constant [%d].\n", i+1);
        scanf("%lf", &b[i]);
    }

    puts("Input matrix is...");
    show_input_matrix(n, a);
    puts("");

    puts("Answer solved by Gauss-Seidel is...");
    solve_by_gauss_seidel(n, a, b, x);
    show_answers_array(n, x);
    puts("");

    puts("Answer solved by SOR is...");
    solve_by_sor(n, a, b, x);
    show_answers_array(n, x);

    return EXIT_SUCCESS;
}
