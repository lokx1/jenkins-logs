
#include <stdio.h>

void bigONotation(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
}

int main() {
    printf("Test Case 1: n = 0\n");
    bigONotation(0);
    printf("Expected Output: (No output, as n=0)\n\n");

    printf("Test Case 2: n = 1\n");
    bigONotation(1);
    printf("Expected Output:\n(0, 0) \n\n");

    printf("Test Case 3: n = 2\n");
    bigONotation(2);
    printf("Expected Output:\n(0, 0) (0, 1) \n(1, 0) (1, 1) \n\n");

    printf("Test Case 4: n = 3\n");
    bigONotation(3);
    printf("Expected Output:\n(0, 0) (0, 1) (0, 2) \n(1, 0) (1, 1) (1, 2) \n(2, 0) (2, 1) (2, 2) \n\n");

    printf("Test Case 5: n = 5\n");
    bigONotation(5);
    printf("Expected Output:\n(0, 0) (0, 1) (0, 2) (0, 3) (0, 4) \n(1, 0) (1, 1) (1, 2) (1, 3) (1, 4) \n(2, 0) (2, 1) (2, 2) (2, 3) (2, 4) \n(3, 0) (3, 1) (3, 2) (3, 3) (3, 4) \n(4, 0) (4, 1) (4, 2) (4, 3) (4, 4) \n\n");

    return 0;
}
