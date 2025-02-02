
#include <stdio.h>

void test_pointer_functionality() {
    int var = 10;
    int *ptr;

    ptr = &var;

    if (var != 10) {
        printf("Test failed: var is not 10\n");
    } else if (&var != ptr) {
        printf("Test failed: pointer does not point to var\n");
    } else if (*ptr != 10) {
        printf("Test failed: value pointed by pointer is not 10\n");
    } else {
        printf("Test passed\n");
    }
}

int main() {
    printf("Running test_pointer_functionality...\n");
    test_pointer_functionality();
    return 0;
}
