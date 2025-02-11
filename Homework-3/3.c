#include <stdio.h>
#define DEBUG(A) printf("Variable '%s': %d, File: %s, Line: %d\n", #A, A, __FILE__, __LINE__);

int main(){
    int sum;
    sum = 5;
    DEBUG(sum);
}