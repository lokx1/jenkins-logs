#include <stdio.h>
#include "p26.c"

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    // Test array elements
    for (int i = 0; i < 5; i++) {
        if (arr[i] != i + 1) {
            printf("Test failed: arr[%d] is %d but should be %d\n", i, arr[i], i + 1);
            return 1;
        }
    }

    // Test matrix elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != (i + 1) * 3 + j + 1) {
                printf("Test failed: matrix[%d][%d] is %d but should be %d\n", i, j, matrix[i][j], (i + 1) * 3 + j + 1);
                return 1;
            }
        }
    }

    printf("All tests passed!\n");
    return 0;
}