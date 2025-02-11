#include <stdio.h>
#define SWAP(A,B, TYPE) TYPE temp = A; A = B; B = temp;
#define ARR_SIZE 5
#define SORT(ARRAY,SIZE, TYPE, COMPARE) for(int i = 0; i < SIZE -1; i++) { \
    for(int j = 0;j < SIZE - i -1; j ++) { \
        if(ARRAY[j] COMPARE ARRAY[j + 1]) {\
        SWAP(ARRAY[j], ARRAY[j + 1], TYPE); \
        }\
    }\
}\

int main(){
    char arr[ARR_SIZE] = {'c', 'b', 'g', 'a', 'm'};
    SORT(arr, ARR_SIZE, char, >);

    for(int i=0; i < ARR_SIZE; i++){
        printf("%c ", arr[i]);
    }
}