#ifndef ROOTFINDING_TYPE_H
#define ROOTFINDING_TYPE_H

typedef double (*func)(double);

typedef struct {
    func f;
    func df;
    int min;
    int max;
    int initval;
} question;

#endif
