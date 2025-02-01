#include "stdio.h"

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int result1 = subtract(10, 5);
    printf("Test case 1: %d\n", result1);  // Expected output: 5

    int result2 = subtract(-5, -10);
    printf("Test case 2: %d\n", result2);  // Expected output: 5

    int result3 = subtract(0, 0);
    printf("Test case 3: %d\n", result3);  // Expected output: 0

    int result4 = subtract(5, 10);
    printf("Test case 4: %d\n", result4);  // Expected output: -5

    return 0;
}