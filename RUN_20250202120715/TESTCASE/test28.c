
#include <stdio.h>
#include <stdlib.h>

void test_no_arguments() {
    char *argv[] = {"program"};
    int argc = 1;
    printf("Test No Arguments:\n");
    if (argc < 2) {
        printf("Usage: %s <arg1> <arg2> ...\n", argv[0]);
    }
    printf("\n");
}

void test_with_arguments() {
    char *argv[] = {"program", "arg1", "arg2", "arg3"};
    int argc = 4;
    printf("Test With Arguments:\n");
    if (argc < 2) {
        printf("Usage: %s <arg1> <arg2> ...\n", argv[0]);
    } else {
        printf("Arguments passed to the program:\n");
        for (int i = 1; i < argc; i++)
            printf("%s\n", argv[i]);
    }
    printf("\n");
}

int main() {
    test_no_arguments();
    test_with_arguments();
    return 0;
}
