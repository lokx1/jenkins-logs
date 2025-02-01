
#include "stdio.h"

int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Test case 1: Subtracting positive numbers
    int result1 = subtract(10, 5);
    printf("subtract(10, 5) = %d\n", result1); // Expected output: 5

    // Test case 2: Subtracting a positive and a negative number
    int result2 = subtract(10, -5);
    printf("subtract(10, -5) = %d\n", result2); // Expected output: 15

    // Test case 3: Subtracting two negative numbers
    int result3 = subtract(-10, -5);
    printf("subtract(-10, -5) = %d\n", result3); // Expected output: -5

    // Test case 4: Subtracting a number from itself
    int result4 = subtract(5, 5);
    printf("subtract(5, 5) = %d\n", result4); // Expected output: 0

    // Test case 5: Subtracting zero from a number
    int result5 = subtract(5, 0);
    printf("subtract(5, 0) = %d\n", result5); // Expected output: 5

    // Test case 6: Subtracting a number from zero
    int result6 = subtract(0, 5);
    printf("subtract(0, 5) = %d\n", result6); // Expected output: -5

    return 0;
}
