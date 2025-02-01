#include <stdio.h>
#include <assert.h>

void test() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int expected[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            assert(matrix[i][j] == expected[i][j]);
        }
    }
}

int main() {
    test();
    printf("All tests passed successfully.\n");
    return 0;
}