#ifndef QUADRATICROOTS_H
#define QUADRATICROOTS_H

typedef struct{
    long double x1;
    long double x2;
    int not_real_roots;
} QuadraticRootsResult;

QuadraticRootsResult FindRoots(long double a, long double b, long double c);

#endif