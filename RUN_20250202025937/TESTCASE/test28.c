
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_no_arguments() {
    char *argv[] = {"program"};
    int argc = 1;
    if (argc < 2) {
        printf("Usage: %s <arg1> <arg2> ...\n", argv[0]);
    }
}

void test_one_argument() {
    char *argv[] = {"program", "arg1"};
    int argc = 2;
    if (argc < 2) {
        printf("Usage: %s <arg1> <arg2> ...\n", argv[0]);
    } else {
        printf("Arguments passed to the program:\n");
        for (int i = 1; i < argc; i++)
            printf("%s\n", argv[i]);
    }
}

void test_multiple_arguments() {
    char *argv[] = {"program", "arg1", "arg2", "arg3"};
    int argc = 4;
    if (argc < 2) {
        printf("Usage: %s <arg1> <arg2> ...\n", argv[0]);
    } else {
        printf("Arguments passed to the program:\n");
        for (int i = 1; i < argc; i++)
            printf("%s\n", argv[i]);
    }
}

int main() {
    printf("Test 1: No arguments\n");
    test_no_arguments();
    printf("\n");

    printf("Test 2: One argument\n");
    test_one_argument();
    printf("\n");

    printf("Test 3: Multiple arguments\n");
    test_multiple_arguments();
    printf("\n");

    return 0;
}
