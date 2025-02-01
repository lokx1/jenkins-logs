
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void run_test_case(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <arg1>\n", argv[0]);
    } else {
        printf("Argument passed: %s\n", argv[1]);
    }
}

int main() {
    // Test case 1: No arguments
    char *argv1[] = {"program"};
    run_test_case(1, argv1);

    // Test case 2: One argument
    char *argv2[] = {"program", "test"};
    run_test_case(2, argv2);

    // Test case 3: Multiple arguments
    char *argv3[] = {"program", "test", "extra"};
    run_test_case(3, argv3);

    return 0;
}
