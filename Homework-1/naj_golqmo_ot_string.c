#include <stdio.h>
#include <string.h>


char function(char string[]){
    char max;
    max = string[0];
    for(int i = 1;i < 4;i++){
        if(max < string[i]){
            max = string[i];
        }
    }
    return max;
}

int main(){
    char string[]="Ivan";

    printf("%c", function(string));
}