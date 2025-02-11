#include <stdio.h>
#include "transformation.c"



int main() {
    char inputs[][100] = {"123", "-123", "12a34", "", "+456", "0"};
    int num_examples = sizeof(inputs) / sizeof(inputs[0]);

    for (int i = 0; i < num_examples; i++) {
        printf("Input: \"%s\"\n", inputs[i]);
        Transformation result = StringToLong(inputs[i]);
        if (result.error[0] != '\0') {
            printf("Error: %s\n", result.error);
        } else {
            printf("Result: %ld\n", result.result);
        }
        printf("\n");
    }

    return 0;
}