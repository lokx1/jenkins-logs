
#include "stdio.h"

int divide(int a, int b) {
    return b != 0 ? a / b : 0; // Return 0 if division by zero
}

int main() {
    // Test case 1: Normal division
    int result1 = divide(10, 2);
    printf("divide(10, 2) = %d\n", result1); // Expected output: 5

    // Test case 2: Division by zero
    int result2 = divide(10, 0);
    printf("divide(10, 0) = %d\n", result2); // Expected output: 0

    // Test case 3: Negative dividend
    int result3 = divide(-10, 2);
    printf("divide(-10, 2) = %d\n", result3); // Expected output: -5

    // Test case 4: Negative divisor
    int result4 = divide(10, -2);
    printf("divide(10, -2) = %d\n", result4); // Expected output: -5

    // Test case 5: Both negative
    int result5 = divide(-10, -2);
    printf("divide(-10, -2) = %d\n", result5); // Expected output: 5

    // Test case 6: Zero dividend
    int result6 = divide(0, 5);
    printf("divide(0, 5) = %d\n", result6); // Expected output: 0

    return 0;
}
