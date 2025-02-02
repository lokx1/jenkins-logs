
#include <stdio.h>
#include <stdlib.h>

void test_memory_allocation_and_free() {
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
            printf("Test failed: Incorrect value at index %d, expected %d but got %d\n", i, i, ptr[i]);
            free(ptr);
            return;
        }
    }
    free(ptr);
    printf("Test passed: Memory allocated, used, and freed successfully.\n");
}

int main() {
    test_memory_allocation_and_free();
    return 0;
}
