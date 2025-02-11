#include <stdio.h>
#include <string.h>
#include "transformation.h"

Transformation StringToLong(char str[100]) { 
    Transformation result;
    result.result = 0;
    result.error[0] = '\0';

    if (str[0] == '\0') {
        strncpy(result.error, "Input string is empty", sizeof(result.error));
        return result;
    }

    int sign = 1; 
    long value = 0;
    int i = 0;

    
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

   
    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') { 
            value = value * 10 + (str[i] - '0');
        } else {
            strncpy(result.error, "Invalid input string", sizeof(result.error));
            result.result = 0;
            return result;
        }
    }

    result.result = value * sign;
    return result;
}