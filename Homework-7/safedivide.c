#include <stdio.h>
#include "safeint.c"
#include "util.c"

int main(int argc, char *argv[]){
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    SafeResult a = SafeStrToInt(argv[1]);
    SafeResult b = SafeStrToInt(argv[2]);

    if (a.errorflag || b.errorflag) {
        printf("Invalid input: arguments out of range.\n");
        return 1;
    }

    SafeResult result = SafeDivide(a.value, b.value);
    if (result.errorflag) {
        PrintError("Wrong Numbers");
    } else {
        printf("Result: %d\n", result.value);
    }

    return 0;
}