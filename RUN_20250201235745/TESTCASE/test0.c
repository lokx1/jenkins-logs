
#include "stdio.h"

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int result;

    // Test case 1: Positive numbers
    result = subtract(10, 5);
    printf("subtract(10, 5) = %d\n", result); // Expected output: 5

    // Test case 2: Negative numbers
    result = subtract(-10, -5);
    printf("subtract(-10, -5) = %d\n", result); // Expected output: -5

    // Test case 3: Mixed positive and negative
    result = subtract(10, -5);
    printf("subtract(10, -5) = %d\n", result); // Expected output: 15

    // Test case 4: Zero subtraction
    result = subtract(0, 5);
    printf("subtract(0, 5) = %d\n", result); // Expected output: -5

    // Test case 5: Subtraction resulting in zero
    result = subtract(5, 5);
    printf("subtract(5, 5) = %d\n", result); // Expected output: 0

    // Test case 6: Large positive numbers
    result = subtract(1000000, 500000);
    printf("subtract(1000000, 500000) = %d\n", result); // Expected output: 500000

    // Test case 7: Large negative numbers
    result = subtract(-1000000, -500000);
    printf("subtract(-1000000, -500000) = %d\n", result); // Expected output: -500000

    return 0;
}
