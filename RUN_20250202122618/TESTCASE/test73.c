
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void execute_command(const char *command) {
    printf("Executing: %s\n", command);
    int result = system(command);
    if (result != 0) {
        printf("Command execution failed with exit code %d\n", result);
    }
}

int main() {
    // Test case 1: No additional command line arguments
    char *test1[] = {"./program"};
    int test1_argc = 1;
    char command1[256];
    snprintf(command1, sizeof(command1), "./program");
    execute_command(command1);

    // Test case 2: One additional command line argument
    char *test2[] = {"./program", "arg1"};
    int test2_argc = 2;
    char command2[256];
    snprintf(command2, sizeof(command2), "./program arg1");
    execute_command(command2);

    // Test case 3: Multiple command line arguments
    char *test3[] = {"./program", "arg1", "arg2", "arg3"};
    int test3_argc = 4;
    char command3[256];
    snprintf(command3, sizeof(command3), "./program arg1 arg2 arg3");
    execute_command(command3);

    // Test case 4: Command line arguments with spaces
    char *test4[] = {"./program", "arg with spaces", "another arg"};
    int test4_argc = 3;
    char command4[256];
    snprintf(command4, sizeof(command4), "./program \"arg with spaces\" \"another arg\"");
    execute_command(command4);

    return 0;
}
