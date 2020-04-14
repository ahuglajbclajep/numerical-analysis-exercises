#include <stdio.h>
#include <stdbool.h>

void show_input_matrix(int n, double matrix[][n]) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("% .8lf ", matrix[i][j]);
        }
        puts("");
    }
}

void show_answers_array(int n, double *answers) {
    for (int i=0; i<n; i++) {
        printf("% .8lf\n", answers[i]);
    }
}

bool all_mach(int n, bool *array) {
    for (int i=0; i<n; i++) {
        if (array[i] == false) return false;
    }
    return true;
}
