#include <stdio.h>
#include <math.h>
#include "quadraticroots.h"

QuadraticRootsResult FindRoots(long double a, long double b, long double c){
    QuadraticRootsResult result;
    if(a == 0){
        result.not_real_roots = 1;
        return result;
    }

    long double discriminant = b * b - 4 * a * c;

    if(discriminant < 0){
        result.not_real_roots = 1;
    }
    else {
        result.not_real_roots = 0;
        long double sqr_disciminant = sqrtl(discriminant);
        result.x1 = (-b + sqr_disciminant)/(2 * a);
        result.x2 = (-b - sqr_disciminant)/(2 * a);
    }

    return result;
}