#include "stdio.h"

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    // Test case 1: when both numbers are positive and a > b
    printf("Test case 1: %d\n", max(5, 3));  // Expected output: 5

    // Test case 2: when both numbers are positive and a < b
    printf("Test case 2: %d\n", max(3, 5));  // Expected output: 5

    // Test case 3: when both numbers are negative and a > b
    printf("Test case 3: %d\n", max(-2, -3));  // Expected output: -2

    // Test case 4: when both numbers are negative and a < b
    printf("Test case 4: %d\n", max(-3, -2));  // Expected output: -2

    // Test case 5: when a is positive and b is negative
    printf("Test case 5: %d\n", max(5, -3));  // Expected output: 5

    // Test case 6: when a is negative and b is positive
    printf("Test case 6: %d\n", max(-3, 5));  // Expected output: 5

    // Test case 7: when a and b are equal
    printf("Test case 7: %d\n", max(5, 5));  // Expected output: 5

    return 0;
}