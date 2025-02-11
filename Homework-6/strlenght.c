#include <stdio.h>
#include "mystrings.c"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ./strlength.exe <string>\n");
        return 1;
    }
    printf("Length of '%s': %d\n", argv[1], strlength(argv[1]));
    return 0;
}