
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
            printf("Test failed: Memory content incorrect at index %d!\n", i);
            free(ptr);
            return;
        }
    }
    free(ptr);
    printf("Test passed: Memory allocated, used, and freed correctly.\n");
}

int main() {
    test_memory_allocation();
    return 0;
}
