
#include "stdio.h"

int divide(int a, int b) {
    return b != 0 ? a / b : 0; // Return 0 if division by zero
}

int main() {
    // Test case 1: Normal division
    int result1 = divide(10, 2);
    printf("divide(10, 2) = %d\n", result1); // Expected: 5

    // Test case 2: Division by zero
    int result2 = divide(10, 0);
    printf("divide(10, 0) = %d\n", result2); // Expected: 0

    // Test case 3: Negative dividend
    int result3 = divide(-10, 2);
    printf("divide(-10, 2) = %d\n", result3); // Expected: -5

    // Test case 4: Negative divisor
    int result4 = divide(10, -2);
    printf("divide(10, -2) = %d\n", result4); // Expected: -5

    // Test case 5: Both dividend and divisor negative
    int result5 = divide(-10, -2);
    printf("divide(-10, -2) = %d\n", result5); // Expected: 5

    // Test case 6: Zero dividend
    int result6 = divide(0, 5);
    printf("divide(0, 5) = %d\n", result6); // Expected: 0

    // Test case 7: Zero dividend and negative divisor
    int result7 = divide(0, -5);
    printf("divide(0, -5) = %d\n", result7); // Expected: 0

    return 0;
}
