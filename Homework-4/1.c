#include <stdio.h>
#define SIZE 5
#define DEBUG




void sort_array(int arr[]){
    int sum =0;
    for(int i=0;i < SIZE - 1;i++){
        for(int j=i+1;j < SIZE; j++){
            if(arr[i] > arr[j]){
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
    for(int k=0;k < SIZE; k++){
        if(arr[k] % 3 == 0){
            sum += arr[k];
            #ifdef DEBUG
            printf("Part of the sum : %d\n", arr[k]);
            #endif
        }
    }
    #ifdef DEBUG
    printf("SORTED ARRAY: ");
    for(int i = 0;i < SIZE;i++){
        printf(" %d",arr[i]);
    }
    #endif   
}


int main(){
    int arr[] = {1, 3, 5, 6, 9};
    sort_array(arr);
}