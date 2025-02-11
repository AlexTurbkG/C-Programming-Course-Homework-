#include "processes.c"
#include <string.h>
#include <stdio.h>

void DisplayMenu(){
    printf("\nTask Manager\n");
    printf("1. Create new process\n");
    printf("2. List all processes\n");
    printf("3. Stop Process\n");
    printf("4. Exit\n");
    printf("Select an option: ");
}

int main(){
    int choice;
    char name[MAX_NAME_LENGTH + 1];
    int id;

    while(1){
        DisplayMenu();
        if(scanf("%d", &choice) != 1){
            printf("Invalid Input.Please enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        switch(choice){
            case 1:
                printf("Enter process name: ");
                scanf("%s", name);
                int new_id = CreateNewProcess(name);
                if (new_id != 0) {
                    printf("Process created with ID: %d\n", new_id);
                }
                break;
            case 2:
                ListProcesses();
                break;
            case 3:
                printf("Enter process ID to stop: ");
                if (scanf("%d", &id) != 1) {
                    printf("Invalid input. Please enter a valid ID.\n");
                    while (getchar() != '\n');
                    continue;
                }
                StopProcesses(id);
                break;
            case 4:
                printf("Exiting Task Manager...\n");
                return 0;
            default:
                printf("Invalid choice.Please select a valid option.\n");
        }
    }
}