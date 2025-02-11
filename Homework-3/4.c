#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE ## _ ## NAME ## _command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)() {\
    printf("hi\n");\
}\

DEFINE_COMMAND(quit, first);
DEFINE_COMMAND(start, second);

int main() {
    first_quit_command();
    second_start_command();
    return 0;
}