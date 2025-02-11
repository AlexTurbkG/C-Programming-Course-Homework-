#include <stdio.h>
#include "quadraticroots.c"

int main(){
    int a1= 1, b1 = -3, c1 = 2;
    QuadraticRootsResult result1 = FindRoots(a1, b1, c1);
    if(result1.not_real_roots) {
        printf("No real roots for equation with int coefficients.\n");
        printf("\n");
    }
    else {
        printf("Roots for int coefficients: x1 = %.2Lf, x2 = %.2Lf\n", result1.x1, result1.x2);
        printf("\n");
    }

    float a2 = 1.0f, b2 = 2.0f, c2 = 5.0f;
    QuadraticRootsResult result2 = FindRoots(a2, b2, c2);
    if (result2.not_real_roots) {
        printf("No real roots for equation with float coefficients.\n");
        printf("\n");
    } else {
        printf("Roots for float coefficients: x1 = %.2Lf, x2 = %.2Lf\n", result2.x1, result2.x2);
        printf("\n");
    }

    double a3 = 1.0, b3 = -4.0, c3 = 4.0;
    QuadraticRootsResult result3 = FindRoots(a3, b3, c3);
    if (result3.not_real_roots) {
        printf("No real roots for equation with double coefficients.\n");
        printf("\n");
    } else {
        printf("Roots for double coefficients: x1 = %.2Lf, x2 = %.2Lf\n", result3.x1, result3.x2);
        printf("\n");
    }

    return 0;
}