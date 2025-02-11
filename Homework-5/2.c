#include <stdio.h>

int NOK(int a, int b){
    
    int i = 1;
    while(1){
        if((i % a == 0) && (i % b == 0)) return i;
        i++;
        
    }
}

int main(){
    int a = 12;
    int b = 18;
    printf("%d", NOK(a,b));
}