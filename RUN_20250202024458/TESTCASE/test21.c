#include <assert.h>

int main() {
    int *ptr;
    int n = 5;

    // Allocate memory dynamically
    ptr = (int *)malloc(n * sizeof(int));
    assert(ptr != NULL);

    // Use the allocated memory
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
        assert(ptr[i] == i + 1);
    }

    // Free the allocated memory
    free(ptr);

    // Check if memory is freed
    ptr = NULL;
    assert(ptr == NULL);

    return 0;
}