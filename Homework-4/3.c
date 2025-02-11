#include <stdio.h>
#define ARR_SIZE 5
int main(){

    int arr[] = {4,2,5,1,3};

    #ifdef _WIN32
    for(int i = 0; i < ARR_SIZE - 1;i++){
        for(int j = 0;j < ARR_SIZE - i - 1;j++){
            if(arr[j] > arr[j + 1]){
            int swap = arr[ j+ 1];
            arr[j + 1] = arr[j];
            arr[j] = swap;
            }
        }
    }
    printf("THIS IS WINDOWS\n");
    #elif LINUX
    for(int i = 0;i < ARR_SIZE - 1;i++){
        int min_idx = i;
        for(int j = i + 1;j < ARR_SIZE;j++){
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
    printf("THIS IS LINUX\n");
    
    #elif __APPLE__
    for(int i = 1; i < ARR_SIZE;i++){
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("THIS IS MAC OS\n");
    #else 
    for(int i = 0;i <= ARR_SIZE/2 - 1;i++){
        int temp = arr[i];
        arr[i] = arr[ARR_SIZE - i - 1];
        arr[ARR_SIZE - i - 1] = temp;
        
        
    }
    printf("OS IS NOT ONE OF THESE: WINDOWS, LINUX OR MAC OS\n");
    #endif
    
    

    for(int i = 0;i < ARR_SIZE;i++){
        printf("%d ", arr[i]);
    }



    return 0;
}