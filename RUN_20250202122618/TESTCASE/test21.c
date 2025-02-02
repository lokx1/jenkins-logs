
#include <stdio.h>
#include <stdlib.h>

void test_memory_allocation(int n) {
    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed for n = %d.\n", n);
        return;
    }

    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
}

int main() {
    printf("Test with n = 5:\n");
    test_memory_allocation(5);

    printf("Test with n = 0 (edge case):\n");
    test_memory_allocation(0);

    printf("Test with n = 10:\n");
    test_memory_allocation(10);

    printf("Test with n = 1 (small allocation):\n");
    test_memory_allocation(1);

    printf("Test with a large n = 1000000:\n");
    test_memory_allocation(1000000);

    return 0;
}
