#include <assert.h>

int main() {
    int *ptr;

    ptr = (int*)malloc(sizeof(int));
    assert(ptr != NULL);

    *ptr = 10;
    assert(*ptr == 10);

    printf("Value: %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    return 0;
}