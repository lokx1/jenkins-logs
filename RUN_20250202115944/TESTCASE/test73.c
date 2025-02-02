
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Test case 1: No command line arguments
    char *argv1[] = {"program"};
    int argc1 = sizeof(argv1) / sizeof(char*);
    printf("Test Case 1:\n");
    printf("Number of command line arguments: %d\n", argc1);
    printf("Command line arguments:\n");
    for (int i = 0; i < argc1; i++) {
        printf("%s\n", argv1[i]);
    }
    printf("\n");

    // Test case 2: One command line argument
    char *argv2[] = {"program", "arg1"};
    int argc2 = sizeof(argv2) / sizeof(char*);
    printf("Test Case 2:\n");
    printf("Number of command line arguments: %d\n", argc2);
    printf("Command line arguments:\n");
    for (int i = 0; i < argc2; i++) {
        printf("%s\n", argv2[i]);
    }
    printf("\n");

    // Test case 3: Multiple command line arguments
    char *argv3[] = {"program", "arg1", "arg2", "arg3"};
    int argc3 = sizeof(argv3) / sizeof(char*);
    printf("Test Case 3:\n");
    printf("Number of command line arguments: %d\n", argc3);
    printf("Command line arguments:\n");
    for (int i = 0; i < argc3; i++) {
        printf("%s\n", argv3[i]);
    }
    printf("\n");

    return 0;
}
