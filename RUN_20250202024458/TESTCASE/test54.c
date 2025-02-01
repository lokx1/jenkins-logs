#include <assert.h>

int test_memory_functions() {
    int *ptr1, *ptr2;

    ptr1 = (int*)malloc(5 * sizeof(int));
    ptr2 = (int*)calloc(5, sizeof(int));

    if (ptr1 == NULL || ptr2 == NULL) {
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr1[i] = i + 1;
        ptr2[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        assert(ptr1[i] == i + 1);
        assert(ptr2[i] == i + 1);
    }

    free(ptr1);
    free(ptr2);

    return 0;
}

int main() {
    int result = test_memory_functions();
    if (result == 1) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("All tests passed.\n");
    return 0;
}