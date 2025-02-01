
#include <stdio.h>
#include <stdlib.h>

void test_memory_allocation() {
    int *ptr = (int *)malloc(sizeof(int) * 5);
    if (ptr == NULL) {
        printf("Test failed: Memory allocation failed!\n");
        return;
    }
    for (int i = 0; i < 5; ++i) {
        ptr[i] = i;
    }
    for (int i = 0; i < 5; ++i) {
        if (ptr[i] != i) {
            printf("Test failed: Incorrect value at index %d\n", i);
            free(ptr);
            return;
        }
    }
    free(ptr);
    printf("Test passed: Memory allocation and access successful.\n");
}

void test_memory_leak_detection() {
    int *ptr = (int *)malloc(sizeof(int) * 5);
    if (ptr == NULL) {
        printf("Test failed: Memory allocation failed!\n");
        return;
    }
    for (int i = 0; i < 5; ++i) {
        ptr[i] = i;
    }
    // Intentionally not freeing memory to simulate a leak
    printf("Test completed: Memory leak simulated.\n");
}

int main() {
    printf("Running test_memory_allocation...\n");
    test_memory_allocation();
    printf("Running test_memory_leak_detection...\n");
    test_memory_leak_detection();
    return 0;
}
