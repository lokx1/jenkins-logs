
#include "stdio.h"

int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Test case 1: Positive numbers
    int result1 = multiply(3, 4);
    printf("multiply(3, 4) = %d\n", result1); // Expected output: 12

    // Test case 2: Negative and positive number
    int result2 = multiply(-5, 6);
    printf("multiply(-5, 6) = %d\n", result2); // Expected output: -30

    // Test case 3: Two negative numbers
    int result3 = multiply(-7, -8);
    printf("multiply(-7, -8) = %d\n", result3); // Expected output: 56

    // Test case 4: Multiplication by zero
    int result4 = multiply(0, 9);
    printf("multiply(0, 9) = %d\n", result4); // Expected output: 0

    // Test case 5: Multiplication with zero as the second argument
    int result5 = multiply(10, 0);
    printf("multiply(10, 0) = %d\n", result5); // Expected output: 0

    // Test case 6: Large numbers
    int result6 = multiply(1000, 2000);
    printf("multiply(1000, 2000) = %d\n", result6); // Expected output: 2000000

    return 0;
}
