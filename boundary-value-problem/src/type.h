#ifndef BOUNDARY_VALUE_PROBLEM_TYPE_H
#define BOUNDARY_VALUE_PROBLEM_TYPE_H

typedef char* string;

typedef struct {
    int len_x;
    int len_y;
    double* lattice;
} xy_plane;

static inline double* get_ptr(xy_plane* xy, int x, int y) {
    return xy->lattice + xy->len_x * (xy->len_y -1 -y) + x;
}

#endif
