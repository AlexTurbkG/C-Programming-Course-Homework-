#include <stdio.h>
#include "mystrings.c"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: ./strcompare.exe <string1> <string2>\n");
        return 1;
    }

    int result = strcompare(argv[1], argv[2]);
    printf("Comparison result: %d\n", result);
    return 0;
}