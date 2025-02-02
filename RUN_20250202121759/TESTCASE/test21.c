
#include <stdio.h>
#include <stdlib.h>

void test_memory_allocation(int n) {
    int *ptr;

    // Allocate memory dynamically
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed for n = %d.\n", n);
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
    printf("Test case 1: n = 5\n");
    test_memory_allocation(5);

    printf("Test case 2: n = 0 (edge case)\n");
    test_memory_allocation(0);

    printf("Test case 3: n = 10\n");
    test_memory_allocation(10);

    printf("Test case 4: n = -1 (invalid case)\n");
    test_memory_allocation(-1);

    return 0;
}
