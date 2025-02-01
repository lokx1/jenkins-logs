#include <assert.h>

int main() {
    int *ptr;

    ptr = (int*)malloc(5 * sizeof(int));

    assert(ptr != NULL);

    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        assert(ptr[i] == i + 1);
    }

    free(ptr);

    ptr = (int*)malloc(0 * sizeof(int));

    assert(ptr == NULL);

    return 0;
}