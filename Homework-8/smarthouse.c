#include <stdio.h>

void switchLights(unsigned char *state, int room) {
    if (room < 1 || room > 8) {
        printf("Invalid room number. Please enter a number between 1 and 8.\n");
        return;
    }
    
    *state ^= (1 << (room - 1));
}

void printState(unsigned char state) {
    printf("The light is on in rooms:");
    int found = 0;
    for (int i = 0; i < 8; i++) {
        if (state & (1 << i)) {
            printf(" %d", i + 1);
            found = 1;
        }
    }
    if (!found) {
        printf(" None");
    }
    printf("\n");
}

int main() {
    unsigned char lights_states = 0; 
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int room;
                printf("Enter room number (1-8): ");
                scanf("%d", &room);
                switchLights(&lights_states, room);
                break;
            }
            case 2:
                printState(lights_states);
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}