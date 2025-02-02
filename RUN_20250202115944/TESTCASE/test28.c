
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_no_arguments() {
    char *argv[] = {"program_name"};
    int argc = 1;
    printf("Test: No arguments\n");
    main(argc, argv);
}

void test_one_argument() {
    char *argv[] = {"program_name", "arg1"};
    int argc = 2;
    printf("Test: One argument\n");
    main(argc, argv);
}

void test_multiple_arguments() {
    char *argv[] = {"program_name", "arg1", "arg2", "arg3"};
    int argc = 4;
    printf("Test: Multiple arguments\n");
    main(argc, argv);
}

int main() {
    test_no_arguments();
    test_one_argument();
    test_multiple_arguments();
    return 0;
}
