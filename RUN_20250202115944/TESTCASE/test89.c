
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_no_arguments() {
    char *argv[] = {"program_name"};
    int argc = sizeof(argv) / sizeof(argv[0]);
    if (argc < 2) {
        printf("Usage: %s <arg1>\n", argv[0]);
    }
}

void test_with_argument() {
    char *argv[] = {"program_name", "test_argument"};
    int argc = sizeof(argv) / sizeof(argv[0]);
    if (argc >= 2) {
        printf("Argument passed: %s\n", argv[1]);
    }
}

int main() {
    printf("Test Case 1: No arguments\n");
    test_no_arguments();
    printf("Test Case 2: With argument\n");
    test_with_argument();
    return 0;
}
