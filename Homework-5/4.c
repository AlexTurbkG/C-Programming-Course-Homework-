#include <stdio.h>
#include <math.h>
#define ARR_SIZE 5

int main(){
    long arr[ARR_SIZE] = {3,5,2,4,1};
    for(int i=0;i < ARR_SIZE;i++){
        arr[i] = pow(arr[i], 4);
        printf("%ld ", arr[i]);
    }

    
}