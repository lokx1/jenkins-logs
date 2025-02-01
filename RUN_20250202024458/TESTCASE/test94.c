#include <assert.h>

int main() {
    // Test case 1: Normal operation
    int *ptr = (int *)malloc(sizeof(int) * 5);
    assert(ptr != NULL);
    for (int i = 0; i < 5; ++i) {
        ptr[i] = i;
    }
    free(ptr);

    // Test case 2: Check if memory allocation failed
    ptr = (int *)malloc(sizeof(int) * -1);
    assert(ptr == NULL);
    if (ptr != NULL) {
        free(ptr);
    }

    // Test case 3: Check if memory is correctly allocated and can be accessed
    ptr = (int *)malloc(sizeof(int) * 5);
    assert(ptr != NULL);
    for (int i = 0; i < 5; ++i) {
        ptr[i] = i;
    }
    for (int i = 0; i < 5; ++i) {
        assert(ptr[i] == i);
    }
    free(ptr);

    return 0;
}