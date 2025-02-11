#include <stdio.h>

long convert(int number) {
    long binary = 0;
    int ost, place = 1;

    while (number != 0) {
        ost = number % 2;
        binary += ost * place;
        number /= 2;
        place *= 10;
    }

    return binary;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Binary: %ld\n", convert(n));

    return 0;
}
