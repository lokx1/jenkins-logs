#include <stdio.h>
#include <assert.h>

void test_array() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    for (i = 0; i < 5; i++) {
        assert(arr[i] == i + 1);
    }
}

int main() {
    test_array();
    printf("All tests passed.\n");
    return 0;
}