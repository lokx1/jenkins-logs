
#include <stdio.h>
#include <stdlib.h>

void test_memory_allocation() {
    int *ptr1, *ptr2;

    ptr1 = (int*)malloc(5 * sizeof(int));
    ptr2 = (int*)calloc(5, sizeof(int));

    if (ptr1 == NULL || ptr2 == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (int i = 0; i < 5; i++) {
        ptr1[i] = i + 1;
        ptr2[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr1[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr2[i]);
    }

    printf("\n");

    free(ptr1);
    free(ptr2);
}

int main() {
    test_memory_allocation();
    return 0;
}
