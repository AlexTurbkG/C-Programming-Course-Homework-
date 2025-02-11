#include "safeint.h"
#include <limits.h>



SafeResult SafeAdd(int a, int b){
    SafeResult result;
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        result.errorflag = 1;
    } else {
        result.errorflag = 0;
        result.value = a + b;
    }
    return result;

    
    
}
SafeResult SafeSubtract(int a, int b){
    SafeResult result;
    if ((b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b)) {
        result.errorflag = 1;
    } else {
        result.errorflag = 0;
        result.value = a - b;
    }
    return result;

}
SafeResult SafeMultiply(int a, int b){
    SafeResult result;
    if (a > 0) {
        if (b > 0 && a > INT_MAX / b) {
            result.errorflag = 1;
        } else if (b < 0 && a > INT_MIN / b) {
            result.errorflag = 1;
        } else {
            result.errorflag = 0;
            result.value = a * b;
        }
    } else if (a < 0) {
        if (b > 0 && a < INT_MIN / b) {
            result.errorflag = 1;
        } else if (b < 0 && a < INT_MAX / b) {
            result.errorflag = 1;
        } else {
            result.errorflag = 0;
            result.value = a * b;
        }
    } else {
        result.errorflag = 0;
        result.value = 0;
    }
    return result;
}
SafeResult SafeDivide(int a, int b){
    SafeResult result;
    if(b == 0 || (a == INT_MIN && b == -1)){
        result.errorflag = 1;
        result.value = 0;
    }
    else{
        result.errorflag = 0;
        result.value = a / b;
    }
    return result;
}
SafeResult SafeStrToInt(const char *str){
    SafeResult result;
    int value = 0;
    int sign = 1;

    if (*str == '-') {
        sign = -1;
        str++;
    }

    while (*str) {
        if (*str < '0' || *str > '9') {
            return result;
        }

        int digit = *str - '0';
        if ((sign > 0 && value > (INT_MAX - digit) / 10) ||
            (sign < 0 && value < (INT_MIN + digit) / -10)) {
            return result;
        }

        value = value * 10 + (sign * digit);
        str++;
    }

    result.value = value;
    result.errorflag = 0;
    return result;
}

