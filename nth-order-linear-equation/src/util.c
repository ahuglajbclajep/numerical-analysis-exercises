#include <stdio.h>

void show_augmented_matrix(int row, double matrix[][row+1]) {
    for (int i=0; i<row; i++) {
        for (int j=0; j<row+1; j++) {
            printf("% .8lf ", matrix[i][j]);
        }
        puts("");
    }
}

void show_answer(int len, double answer[]) {
    for (int i=0; i<len; i++) {
        printf("% .8lf\n", answer[i]);
    }
}
