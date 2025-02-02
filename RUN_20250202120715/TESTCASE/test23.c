
#include <stdio.h>
#include <stdlib.h>

void test_memory_allocation_success() {
    int *ptr = (int*)malloc(sizeof(int));
    
    if (ptr == NULL) {
        printf("Test failed: Memory allocation failed.\n");
        return;
    }
    
    *ptr = 10;
    if (*ptr == 10) {
        printf("Test passed: Value is %d\n", *ptr);
    } else {
        printf("Test failed: Incorrect value %d\n", *ptr);
    }
    
    free(ptr);
}

void test_memory_allocation_failure() {
    // Simulate failure by trying to allocate an extremely large amount of memory
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
