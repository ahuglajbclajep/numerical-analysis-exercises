#include <stdlib.h>
#include <stdio.h>
#include "type.h"
#include "util.h"
#include "laplace.h"

int main() {
    // (1)
    xy_plane plane1 = {11, 6, (double[]){
        -5, -4, -3, -2, -1,  0,  1,  2,  3,  4,  5,
        -4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,
        -3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,
        -2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8,
        -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  9,
         0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10
    }};
    solutions_of_harmonic_function(&plane1);
    show_plane(&plane1);
    plane_to_csv(&plane1, "1.csv");
    puts("");

    // (2)
    xy_plane plane2 = {11, 6, (double[]){
        -5,  -4,  -3,  -2,  -1,   0,   1,   2,   3,   4,   5,
        -4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,
        -3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,
        -2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,
        -1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,
         0, 0.5,   1, 1.5,   2, 2.5,   3, 3.5,   4, 4.5,   5
    }};
    solutions_of_harmonic_function(&plane2);
    show_plane(&plane2);
    plane_to_csv(&plane2, "2.csv");

    return EXIT_SUCCESS;
}
