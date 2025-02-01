#include <assert.h>

void test_array_and_matrix() {
    int arr[5] = {1, 2, 3, 4, 5};
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    for (int i = 0; i < 5; i++) {
        assert(arr[i] == i + 1);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            assert(matrix[i][j] == i * 3 + j + 1);
        }
    }
}

int main() {
    test_array_and_matrix();
    printf("All tests passed!\n");
    return 0;
}