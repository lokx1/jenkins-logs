
#include <stdio.h>
#include <stdlib.h>

void test_memory_allocation_success() {
    int *ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Test failed: Memory allocation failed.\n");
        return;
    }
    *ptr = 20;
    if (*ptr == 20) {
        printf("Test passed: Memory allocation and assignment successful.\n");
    } else {
        printf("Test failed: Incorrect value assigned.\n");
    }
    free(ptr);
}

void test_memory_allocation_failure() {
    // Simulate memory allocation failure by using a large size
    int *ptr = (int*)malloc(SIZE_MAX);
    if (ptr == NULL) {
        printf("Test passed: Memory allocation failed as expected.\n");
    } else {
        printf("Test failed: Memory allocation succeeded unexpectedly.\n");
        free(ptr);
    }
}

int main() {
    test_memory_allocation_success();
    test_memory_allocation_failure();
    return 0;
}
