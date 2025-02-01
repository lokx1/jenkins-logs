
#include <stdio.h>

void test_matrix_initialization() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int expected[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != expected[i][j]) {
                printf("Test failed at element [%d][%d]\n", i, j);
                return;
            }
        }
    }
    printf("Test for matrix initialization passed.\n");
}

void test_matrix_sum() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }
    if (sum == 45) {
        printf("Test for matrix sum passed.\n");
    } else {
        printf("Test for matrix sum failed. Expected 45, got %d\n", sum);
    }
}

void test_matrix_transpose() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int transpose[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    int expected[3][3] = {{1, 4, 7},
                          {2, 5, 8},
                          {3, 6, 9}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (transpose[i][j] != expected[i][j]) {
                printf("Test for matrix transpose failed at element [%d][%d]\n", i, j);
                return;
            }
        }
    }
    printf("Test for matrix transpose passed.\n");
}

int main() {
    test_matrix_initialization();
    test_matrix_sum();
    test_matrix_transpose();
    return 0;
}
