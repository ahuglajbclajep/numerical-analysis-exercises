#include <stdlib.h>
#include <stdio.h>
#include "type.h"
#include "util.h"
#include "solve-method.h"
#include "funcdef.h"
#include "const.h"

int main() {
    solve_method solve_methods[] = {euler, fixed_euler, runge_kutta_4th};
    initval_problem problems[] = {
        {f, F_INITIAL_VALUE, F_X_MIN, F_X_MAX, F_STEP},
        {g, G_INITIAL_VALUE, G_X_MIN, G_X_MAX, G_STEP},
        {h, H_INITIAL_VALUE, H_X_MIN, H_X_MAX, H_STEP},
        {i, I_INITIAL_VALUE, I_X_MIN, I_X_MAX, I_STEP}
    };

    for (int i=0; i<4; i++) {
        int length = get_steps(problems[i].min, problems[i].max, problems[i].h);
        point data[length]; points ps = {data, length};

        for (int j=0; j<3; j++) {
            char file_name[64];
            snprintf(file_name, sizeof file_name, "%d_%d.csv", i, j);
            points_to_csv(solve_methods[j](&problems[i], &ps), file_name);
        }
    }

    return EXIT_SUCCESS;
}
