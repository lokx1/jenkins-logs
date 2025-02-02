
#include <stdio.h>

void printMatrix(int matrix[3][3]) {
    printf("Matrix elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void testMatrix1() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    printMatrix(matrix);
}

void testMatrix2() {
    int matrix[3][3] = {{9, 8, 7},
                        {6, 5, 4},
                        {3, 2, 1}};
    printMatrix(matrix);
}

void testMatrix3() {
    int matrix[3][3] = {{0, 0, 0},
                        {0, 0, 0},
                        {0, 0, 0}};
    printMatrix(matrix);
}

int main() {
    testMatrix1();
    testMatrix2();
    testMatrix3();
    return 0;
}
