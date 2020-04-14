#include <stdio.h>
#include "type.h"

void points_to_csv(points* ps, string file_name) {
    FILE* fp = fopen(file_name, "w");
    if (fp != NULL) {
        for (int i=0; i<ps->len; i++) {
            fprintf(fp, "%.2lf,%.8lf\n", ps->body[i].x, ps->body[i].y);
        }
    }
}
