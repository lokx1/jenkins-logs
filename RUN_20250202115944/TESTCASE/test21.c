
#include <stdio.h>
#include <stdlib.h>

// Function to test memory allocation and deallocation
void test_memory_allocation(int n) {
    int *ptr;

    // Allocate memory dynamically
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    // Use the allocated memory
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(ptr);
}

int main() {
    // Test case 1: Allocate memory for 5 integers
    printf("Test Case 1: n = 5\n");
    test_memory_allocation(5);

    // Test case 2: Allocate memory for 0 integers (edge case)
    printf("Test Case 2: n = 0\n");
    test_memory_allocation(0);

    // Test case 3: Allocate memory for a larger number of integers
    printf("Test Case 3: n = 10\n");
    test_memory_allocation(10);

    // Test case 4: Allocate memory for a single integer
    printf("Test Case 4: n = 1\n");
    test_memory_allocation(1);

    return 0;
}
