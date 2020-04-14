#include <math.h>
#include "type.h"
#include "const.h"

void solutions_of_harmonic_function(xy_plane* xy) {
    double error_max;
    do {
        error_max = 0;
        for (int y=1; y < xy->len_y-1; y++) {
            for (int x=1; x < xy->len_x-1; x++) {
                double old_val = *get_ptr(xy, x, y);
                *get_ptr(xy, x, y) = (*get_ptr(xy, x, y+1) + *get_ptr(xy, x, y-1) + *get_ptr(xy, x+1, y) + *get_ptr(xy, x-1, y))/4;

                double error = fabs(*get_ptr(xy, x, y) - old_val);
                if (error_max < error) error_max = error;
            }
        }
    } while (ACCURACY < error_max);
}
