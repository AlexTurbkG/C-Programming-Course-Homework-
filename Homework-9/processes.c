#include <stdio.h>
#include <string.h>
#include "processes.h"


Process processes[MAX_PROCESSES];
int process_count = 0;
static int NextProcessId(){
    static int current_id = 1;
    if(current_id <= 0){
        return 0;
    }
    return current_id++;
}

int CreateNewProcess(const char* name){
    if(process_count >= MAX_PROCESSES){
        printf("ERROR: Maximum number of proccess has been reached.\n");
        return 0;
    }

    int id = NextProcessId();
    if (id == 0) {
        printf("ERROR: No more unique process IDs available.\n");
        return 0;
    }

    Process new_process = {.id = id};
    
    strncpy(new_process.name, name, MAX_NAME_LENGTH);
    new_process.name[MAX_NAME_LENGTH] = '\0';

    processes[process_count++] = new_process;
    
    return id;
}

void StopProcesses(int id){
    int found = 0;
    for(int i = 0; i < process_count; i++){
        if(processes[i].id == id){
            found = 1;
            for(int j = 0;j < process_count - 1;j++){
                processes[j] = processes[j + 1];
            }
            printf("Process removed.\n");
            process_count--;
            break;
        }
    }

    if(!found){
        printf("ERROR: Process with ID %d not found.\n", id);
    }
}

void ListProcesses(){
    if(process_count == 0){
        printf("No process running");
        return;
    }

    printf("Processes running:\n");
    for(int i = 0;i < process_count; i++){
        printf("ID: %d, Name: %s\n",processes[i].id, processes[i].name);
    }

    
}