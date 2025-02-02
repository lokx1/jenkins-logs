
#include <stdio.h>
#include <stdlib.h>

void test_memory_allocation() {
    int *ptr;
    ptr = (int*)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
}

int main() {
    test_memory_allocation();
    return 0;
}
