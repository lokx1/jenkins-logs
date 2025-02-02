
#include <stdio.h>
#include <stdlib.h>

void test_no_arguments() {
    char *argv[] = {"program"};
    int argc = 1;
    // Simulate the main function
    if (argc < 2) {
        printf("Usage: %s <arg1> <arg2> ...\n", argv[0]);
    }
}

void test_with_arguments() {
    char *argv[] = {"program", "arg1", "arg2", "arg3"};
    int argc = 4;
    // Simulate the main function
    if (argc < 2) {
        printf("Usage: %s <arg1> <arg2> ...\n", argv[0]);
        return;
    }

    printf("Arguments passed to the program:\n");
    for (int i = 1; i < argc; i++)
        printf("%s\n", argv[i]);
}

int main() {
    printf("Test 1: No arguments\n");
    test_no_arguments();
    printf("\nTest 2: With arguments\n");
    test_with_arguments();
    return 0;
}
