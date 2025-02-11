#include <stdio.h>

int main(){
    int arr[]={1, 7, 10, 15, 16, 13, 23, 30};
    int flag;
    int sum = 0;
    int j;

    for(int i = 0;i < 8 ;i++){
        flag = 1;
        j = 1;
        do{
            j++;
            
            if(arr[i] == 1){
                flag = 0;
                break;        
            }
            else if(arr[i]%j == 0 && j == arr[i]){
                sum+=arr[i];
            }
            else if(arr[i]%j == 0 && j != arr[i]){
                flag = 0;
            }
            
        }while(flag!=0 && j < arr[i]);
    }
    printf("%d", sum);
    return 0;
}