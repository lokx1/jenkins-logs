
#include "stdio.h"

int divide(int a, int b) {
    return b != 0 ? a / b : 0; // Return 0 if division by zero
}

int main() {
    int result;

    // Test case 1: Normal division
    result = divide(10, 2);
    printf("Test 1 - divide(10, 2): %d\n", result); // Expected output: 5

    // Test case 2: Division by zero
    result = divide(10, 0);
    printf("Test 2 - divide(10, 0): %d\n", result); // Expected output: 0

    // Test case 3: Negative dividend
    result = divide(-10, 2);
    printf("Test 3 - divide(-10, 2): %d\n", result); // Expected output: -5

    // Test case 4: Negative divisor
    result = divide(10, -2);
    printf("Test 4 - divide(10, -2): %d\n", result); // Expected output: -5

    // Test case 5: Both negative
    result = divide(-10, -2);
    printf("Test 5 - divide(-10, -2): %d\n", result); // Expected output: 5

    // Test case 6: Zero dividend
    result = divide(0, 5);
    printf("Test 6 - divide(0, 5): %d\n", result); // Expected output: 0

    // Test case 7: Zero dividend and zero divisor
    result = divide(0, 0);
    printf("Test 7 - divide(0, 0): %d\n", result); // Expected output: 0

    return 0;
}
