#ifndef PROCESSES_H
#define PROCESSES_H

#define MAX_PROCESSES 5
#define MAX_NAME_LENGTH 30

typedef struct{
    int id;
    char name[MAX_NAME_LENGTH + 1];
}Process;

extern Process processes[MAX_PROCESSES];
extern int process_count;

int CreateNewProcess(const char* name);
void StopProcesses(int id);
void ListProcesses();

#endif