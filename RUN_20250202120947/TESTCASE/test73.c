
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to simulate command line arguments
void test_command_line_args(int argc, char *argv[]) {
    printf("Number of command line arguments: %d\n", argc);
    printf("Command line arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
}

int main() {
    // Test case 1: No additional command line arguments
    char *argv1[] = {"program"};
    test_command_line_args(1, argv1);

    // Test case 2: One additional command line argument
    char *argv2[] = {"program", "arg1"};
    test_command_line_args(2, argv2);

    // Test case 3: Multiple command line arguments
    char *argv3[] = {"program", "arg1", "arg2", "arg3"};
    test_command_line_args(4, argv3);

    // Test case 4: Command line arguments with spaces
    char *argv4[] = {"program", "arg with space", "another arg"};
    test_command_line_args(3, argv4);

    // Test case 5: Empty string as an argument
    char *argv5[] = {"program", ""};
    test_command_line_args(2, argv5);

    return 0;
}
