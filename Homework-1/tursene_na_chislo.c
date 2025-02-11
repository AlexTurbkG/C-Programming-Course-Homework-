#include <stdio.h>

int function(int arr[], int k){
    int i;
    for(i = 0;i < 6;i++){
        if(k == arr[i]){
            return i;
        }

    }
    return -1;
    }

int main(){
    int arr[]={1, 2, 5, 7, 8, 10};
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d", function(arr, n));
}