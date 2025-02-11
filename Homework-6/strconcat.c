#include <stdio.h>
#include <string.h>
#include "mystrings.c"

#define MAX_LEN 50

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: ./strconcat.exe <string1> <string2>\n");
        return 1;
    }

    if (strlength(argv[1]) > MAX_LEN || strlength(argv[2]) > MAX_LEN) {
        printf("Error: Each string must be no longer than %d characters.\n", MAX_LEN);
        return 1;
    }

    char result[2 * MAX_LEN + 1];
    strcpy(result, argv[1]);
    strconcat(result, argv[2]);

    printf("Concatenated string: %s\n", result);
    return 0;
}