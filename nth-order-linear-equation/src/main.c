#include <stdlib.h>
#include <stdio.h>
#include "util.h"
#include "gaussian-elimination.h"

int main() {
    puts("Please enter number of unknowns.");
    int n;
    if(scanf("%d", &n) < 1) return EXIT_FAILURE;

    double input[n][n+1];
    double answer[n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n+1; j++) {
            printf("Please enter the augmented matrix [%d][%d]element.\n", i+1, j+1);
            if(scanf("%lf", &input[i][j]) < 1) return EXIT_FAILURE;
        }
    }
    puts("");

    puts("Input matrix is...");
    show_augmented_matrix(n, input);

    puts("Triangular matrix is...");
    gaussian_elimination(n, input, answer);
    show_augmented_matrix(n, input);

    puts("Answer is...");
    show_answer(n, answer);

    return EXIT_SUCCESS;
}
