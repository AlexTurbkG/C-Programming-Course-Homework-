#include <stdio.h>
#define COMPARE(A, B) ((A) > (B)) ? (A) : (B)

int main(){
    int a,b;
    a = 1;
    b = 2;
    printf("Bigger number is %d", COMPARE(a, b));
    return 0;
}