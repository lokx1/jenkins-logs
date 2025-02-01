
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
    printf("Test case 1: n = 0\n");
    bigONotation(0);

    printf("\nTest case 2: n = 1\n");
    bigONotation(1);

    printf("\nTest case 3: n = 2\n");
    bigONotation(2);

    printf("\nTest case 4: n = 3\n");
    bigONotation(3);

    printf("\nTest case 5: n = 5\n");
    bigONotation(5);

    return 0;
}
