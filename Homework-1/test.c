#include <stdio.h>
#include <stdbool.h>

int sort_arr(int arr[], int size){
    int swapper;
    for(int i = 0;i < size;i++){
        for(int j = 0;j < size;j++){
            swapper = arr[i];
            if(arr[i] > arr[j]){
                arr[i] = arr[j];
                arr[j] = swapper;
            }
        }
        
    }
    
}

bool checkprime(int arr[], int size){
    for(int i=2;i<size;i++){
        for(int k=2;k <= i;k++){
            if(i < 2) return false;
            if(i%k == 0 && k != i) return false;
            if(i%k == 0 && k == i) return true;
        }
         
    }
}



int combine(int arr[], int size){
    sort_arr(arr, size);
    checkprime(arr, size);
    for(int i=0;i<size;i++){
        printf("%d\n", arr[i]);
    }

}

int main(){
    int arr[]={3,17,22,342,1024,2025,19,25,35,85};    
    int size = sizeof(arr)/sizeof(arr[0]);
    combine(arr, size);
}