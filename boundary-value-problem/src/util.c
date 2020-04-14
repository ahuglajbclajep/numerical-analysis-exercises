#include <stdio.h>
#include "type.h"

void show_plane(xy_plane* xy) {
    for (int i=0; i < xy->len_y; i++) {
        for (int j=0; j < xy->len_x; j++) {
            printf("% lf, ", xy->lattice[xy->len_x*i + j]);
        }
        puts("");
    }
}

void plane_to_csv(xy_plane* xy, string file_name) {
    FILE* fp = fopen(file_name, "w");
    if (fp != NULL) {
        for (int y=0; y < xy->len_y; y++) {
            for (int x=0; x < xy->len_x; x++) {
                fprintf(fp, "%d,%d,%.9lf\n", x, y, *get_ptr(xy, x, y));
            }
        }
    }
}
