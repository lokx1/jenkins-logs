
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Test case 1
    int x1 = 5, y1 = 10;
    printf("Test case 1 - Before swapping: x1 = %d, y1 = %d\n", x1, y1);
    swap(&x1, &y1);
    printf("Test case 1 - After swapping: x1 = %d, y1 = %d\n", x1, y1);

    // Test case 2
    int x2 = -3, y2 = 7;
    printf("Test case 2 - Before swapping: x2 = %d, y2 = %d\n", x2, y2);
    swap(&x2, &y2);
    printf("Test case 2 - After swapping: x2 = %d, y2 = %d\n", x2, y2);

    // Test case 3
    int x3 = 0, y3 = 0;
    printf("Test case 3 - Before swapping: x3 = %d, y3 = %d\n", x3, y3);
    swap(&x3, &y3);
    printf("Test case 3 - After swapping: x3 = %d, y3 = %d\n", x3, y3);

    // Test case 4
    int x4 = 2147483647, y4 = -2147483648;
    printf("Test case 4 - Before swapping: x4 = %d, y4 = %d\n", x4, y4);
    swap(&x4, &y4);
    printf("Test case 4 - After swapping: x4 = %d, y4 = %d\n", x4, y4);

    return 0;
}
