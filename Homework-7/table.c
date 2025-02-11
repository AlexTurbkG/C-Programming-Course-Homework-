#include <stdio.h>
#include <limits.h>


#define PRINT(NAME,PRINT_FORMAT, PRINT_UNSIGNED)\
    printf("%-15s %-10s %-6zu %-20d %-20d %-10s %-20u\n", \
    #NAME,\
    PRINT_FORMAT,\
    sizeof(NAME),\
    (NAME)INT_MAX,\
    (NAME)INT_MIN,\
    PRINT_UNSIGNED,\
    (unsigned NAME)INT_MAX)



int main(){
    printf("%-15s %-10s %-6s %-20s %-20s %-10s %-20s\n",
           "Type", "Signed", "Bytes", "Max Signed", "Min Signed", "Unsigned", "Max Unsigned");
    printf("------------------------------------------------------------------------------------------------------------------------------\n");

    PRINT(char, "%d", "%u");
    PRINT(short, "%d", "%u");
    PRINT(int, "%d", "%u");
    PRINT(long, "%ld", "%lu");
}
