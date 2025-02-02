
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_no_arguments() {
    char *argv[] = {"program_name"};
    int argc = 1;
    printf("Test: No arguments\n");
    if (main(argc, argv) != 1) {
        printf("Test failed: Expected return code 1\n");
    }
}

void test_one_argument() {
    char *argv[] = {"program_name", "test_arg"};
    int argc = 2;
    printf("Test: One argument\n");
    if (main(argc, argv) != 0) {
        printf("Test failed: Expected return code 0\n");
    }
}

void test_multiple_arguments() {
    char *argv[] = {"program_name", "test_arg1", "test_arg2"};
    int argc = 3;
    printf("Test: Multiple arguments\n");
    if (main(argc, argv) != 0) {
        printf("Test failed: Expected return code 0\n");
    }
}

int main() {
    test_no_arguments();
    test_one_argument();
    test_multiple_arguments();
    return 0;
}
