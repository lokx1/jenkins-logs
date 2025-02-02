
#include <stdio.h>
#include <stdlib.h>

void test_allocate_and_free_memory(int n) {
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
    printf("Test case 1: n = 5\n");
    test_allocate_and_free_memory(5);

    printf("Test case 2: n = 10\n");
    test_allocate_and_free_memory(10);

    printf("Test case 3: n = 0\n");
    test_allocate_and_free_memory(0);

    printf("Test case 4: n = 1\n");
    test_allocate_and_free_memory(1);

    printf("Test case 5: n = 100\n");
    test_allocate_and_free_memory(100);

    return 0;
}
