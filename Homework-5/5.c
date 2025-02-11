#include <stdio.h>
#include "math.c"


int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is %d.\n", number, Factoriel(number));
    }
    
    return 0;
}