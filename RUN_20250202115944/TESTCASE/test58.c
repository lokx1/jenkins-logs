
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

int main() {
    int testMatrix1[3][3] = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};
                             
    int testMatrix2[3][3] = {{9, 8, 7},
                             {6, 5, 4},
                             {3, 2, 1}};

    int testMatrix3[3][3] = {{0, 0, 0},
                             {0, 0, 0},
                             {0, 0, 0}};

    int testMatrix4[3][3] = {{1, 1, 1},
                             {1, 1, 1},
                             {1, 1, 1}};

    int testMatrix5[3][3] = {{5, 5, 5},
                             {5, 5, 5},
                             {5, 5, 5}};

    printf("Test Matrix 1:\n");
    printMatrix(testMatrix1);

    printf("Test Matrix 2:\n");
    printMatrix(testMatrix2);

    printf("Test Matrix 3:\n");
    printMatrix(testMatrix3);

    printf("Test Matrix 4:\n");
    printMatrix(testMatrix4);

    printf("Test Matrix 5:\n");
    printMatrix(testMatrix5);

    return 0;
}
