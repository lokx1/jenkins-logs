
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void run_test_case(int argc, char *argv[]) {
    printf("Running test case with %d arguments.\n", argc);
    int result = main(argc, argv);
    printf("Result: %d\n", result);
}

int main() {
    // Test case 1: No arguments
    char *argv1[] = {"program"};
    run_test_case(1, argv1);

    // Test case 2: One argument
    char *argv2[] = {"program", "test"};
    run_test_case(2, argv2);

    // Test case 3: More than one argument
    char *argv3[] = {"program", "test", "extra"};
    run_test_case(3, argv3);

    return 0;
}
