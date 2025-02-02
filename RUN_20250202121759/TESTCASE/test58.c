
#include <stdio.h>

void testMatrixInitialization() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int expected[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};
    int passed = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != expected[i][j]) {
                passed = 0;
                break;
            }
        }
    }
    if (passed) {
        printf("testMatrixInitialization passed\n");
    } else {
        printf("testMatrixInitialization failed\n");
    }
}

void testMatrixOutput() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    printf("Expected Matrix Output:\n");
    printf("1 2 3 \n4 5 6 \n7 8 9 \n");
    printf("Actual Matrix Output:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    testMatrixInitialization();
    testMatrixOutput();
    return 0;
}
