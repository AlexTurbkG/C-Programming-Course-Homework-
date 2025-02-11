#include <stdio.h>

int main(){
    int arr[]={1, 7, 3, 4, 9, 2, 5};
    int size = sizeof(arr)/sizeof (arr[0]);
    int swapper;
    int sum = 0;

    for(int i = 0; i < size; i ++){
        for(int j = 0; j < size; j++){
            if(arr[i] < arr[j]){
                swapper = arr[i];          
                arr[i] = arr[j];
                arr[j] = swapper;
            }
        }
    }

    for(int k = 0;k < size; k++){
        sum = sum + k * arr[k];
    }
    printf("%d", sum);

}