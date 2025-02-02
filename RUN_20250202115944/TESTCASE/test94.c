
#include <stdio.h>
#include <stdlib.h>

void test_memory_allocation() {
    // Allocate memory
    int *ptr = (int *)malloc(sizeof(int) * 5);
    
    // Check if memory allocation is successful
    if (ptr == NULL) {
        printf("Test failed: Memory allocation failed!\n");
        return;
    }
    
    // Use allocated memory
    for (int i = 0; i < 5; ++i) {
        ptr[i] = i;
    }
    
    // Verify allocated memory
    for (int i = 0; i < 5; ++i) {
        if (ptr[i] != i) {
            printf("Test failed: Memory content mismatch at index %d\n", i);
            free(ptr);
            return;
        }
    }
    
    // Free allocated memory
    free(ptr);
    printf("Test passed: Memory allocation and deallocation successful.\n");
}

int main() {
    test_memory_allocation();
    return 0;
}
