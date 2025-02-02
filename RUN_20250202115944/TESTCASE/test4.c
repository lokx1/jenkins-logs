
#include "stdio.h"

int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Test case 1: Positive numbers
    int result1 = subtract(10, 5);
    printf("subtract(10, 5) = %d\n", result1); // Expected output: 5

    // Test case 2: Negative numbers
    int result2 = subtract(-10, -5);
    printf("subtract(-10, -5) = %d\n", result2); // Expected output: -5

    // Test case 3: Positive and negative number
    int result3 = subtract(10, -5);
    printf("subtract(10, -5) = %d\n", result3); // Expected output: 15

    // Test case 4: Negative and positive number
    int result4 = subtract(-10, 5);
    printf("subtract(-10, 5) = %d\n", result4); // Expected output: -15

    // Test case 5: Zero subtraction
    int result5 = subtract(0, 0);
    printf("subtract(0, 0) = %d\n", result5); // Expected output: 0

    // Test case 6: Subtraction with zero
    int result6 = subtract(5, 0);
    printf("subtract(5, 0) = %d\n", result6); // Expected output: 5

    int result7 = subtract(0, 5);
    printf("subtract(0, 5) = %d\n", result7); // Expected output: -5

    return 0;
}
