#include <stdio.h>
#define ARRAY_SIZE 7

int main(){
    #if defined ARRAY_SIZE && ARRAY_SIZE > 0 && ARRAY_SIZE < 11
        int arr[ARRAY_SIZE];
        int power = ARRAY_SIZE - 1;
        for(int i = ARRAY_SIZE - 1; i >= 0;i--){
            if(power == 0) arr[i] = 1;
            else {
                arr[i] = 1;
                for(int j = power; j > 0;j--){
                    arr[i] *= 2;
                }
            }
            power--;
        }
        for(int i=0;i<ARRAY_SIZE;i++){
            printf("%d ", arr[i]);
        }
    #endif
    #if ARRAY_SIZE < 0 || ARRAY_SIZE > 10
    printf("Size is not correct");
    #endif

    #ifndef ARRAY_SIZE
    printf("Macro does not exist");
    #endif
}


