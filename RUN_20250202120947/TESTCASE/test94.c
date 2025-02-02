
#include <stdio.h>
#include <stdlib.h>

void test_memory_allocation_success() {
    int *ptr = (int *)malloc(sizeof(int) * 5);
    if (ptr == NULL) {
        printf("Test failed: Memory allocation failed!\n");
        exit(1);
    }
    for (int i = 0; i < 5; ++i) {
        ptr[i] = i;
    }
    for (int i = 0; i < 5; ++i) {
        if (ptr[i] != i) {
            printf("Test failed: Incorrect value at index %d\n", i);
            free(ptr);
            exit(1);
        }
    }
    free(ptr);
    printf("Test passed: Memory allocation and usage successful.\n");
}

void test_memory_allocation_failure() {
    int *ptr = (int *)malloc(sizeof(int) * 100000000000);
    if (ptr == NULL) {
        printf("Test passed: Memory allocation failed as expected.\n");
    } else {
        printf("Test failed: Memory allocation unexpectedly succeeded.\n");
        free(ptr);
        exit(1);
    }
}

int main() {
    test_memory_allocation_success();
    test_memory_allocation_failure();
    return 0;
}
