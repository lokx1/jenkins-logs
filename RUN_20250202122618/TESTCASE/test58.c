
#include <stdio.h>

void test_matrix_display();

int main() {
    test_matrix_display();
    return 0;
}

void test_matrix_display() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    printf("Matrix elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
