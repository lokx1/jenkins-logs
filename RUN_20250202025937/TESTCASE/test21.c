
#include <stdio.h>
#include <stdlib.h>

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
    printf("Test case 1: n = 5\n");
    test_memory_allocation(5);

    // Test case 2: Allocate memory for 0 integers (should not print anything)
    printf("Test case 2: n = 0\n");
    test_memory_allocation(0);

    // Test case 3: Allocate memory for a large number of integers
    printf("Test case 3: n = 1000\n");
    test_memory_allocation(1000);

    return 0;
}
