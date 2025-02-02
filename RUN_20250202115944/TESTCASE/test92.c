
#include "stdio.h"

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    // Test Case 1: a is less than b
    int result1 = min(3, 5);
    printf("min(3, 5) = %d\n", result1); // Expected output: 3

    // Test Case 2: a is greater than b
    int result2 = min(10, 2);
    printf("min(10, 2) = %d\n", result2); // Expected output: 2

    // Test Case 3: a is equal to b
    int result3 = min(7, 7);
    printf("min(7, 7) = %d\n", result3); // Expected output: 7

    // Test Case 4: a is negative, b is positive
    int result4 = min(-5, 3);
    printf("min(-5, 3) = %d\n", result4); // Expected output: -5

    // Test Case 5: a is positive, b is negative
    int result5 = min(4, -8);
    printf("min(4, -8) = %d\n", result5); // Expected output: -8

    // Test Case 6: both a and b are negative
    int result6 = min(-2, -9);
    printf("min(-2, -9) = %d\n", result6); // Expected output: -9

    return 0;
}
