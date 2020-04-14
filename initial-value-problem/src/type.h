#ifndef RUNGE_KUTTA_4TH_DATA_STRUCT_H
#define RUNGE_KUTTA_4TH_DATA_STRUCT_H

typedef char* string;

typedef double (*y_)(double, double);

typedef struct {
    y_ f;
    int initval;
    int min;
    int max;
    double h;
} initval_problem;

typedef struct {
    double x;
    double y;
} point;

typedef struct {
    point* body;
    int len;
} points;

typedef points* (*solve_method)(initval_problem*, points* p);

#endif
