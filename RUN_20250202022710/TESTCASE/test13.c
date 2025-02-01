#include "stdio.h"

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    // Test Case 1: Both numbers are positive and first number is smaller
    printf("%d\n", min(3, 5));  // Expected output: 3

    // Test Case 2: Both numbers are positive and second number is smaller
    printf("%d\n", min(10, 7));  // Expected output: 7

    // Test Case 3: Both numbers are negative and first number is smaller
    printf("%d\n", min(-4, -2));  // Expected output: -4

    // Test Case 4: Both numbers are negative and second number is smaller
    printf("%d\n", min(-3, -5));  // Expected output: -5

    // Test Case 5: One number is positive and other is negative
    printf("%d\n", min(-3, 5));  // Expected output: -3

    // Test Case 6: Both numbers are equal
    printf("%d\n", min(5, 5));  // Expected output: 5

    return 0;
}