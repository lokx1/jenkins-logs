
#include "stdio.h"

int modulus(int a, int b) {
    return a % b;
}

int main() {
    int result;

    // Test case 1: Positive numbers
    result = modulus(10, 3);
    printf("modulus(10, 3) = %d\n", result); // Expected output: 1

    // Test case 2: Negative dividend
    result = modulus(-10, 3);
    printf("modulus(-10, 3) = %d\n", result); // Expected output: -1

    // Test case 3: Negative divisor
    result = modulus(10, -3);
    printf("modulus(10, -3) = %d\n", result); // Expected output: 1

    // Test case 4: Both negative
    result = modulus(-10, -3);
    printf("modulus(-10, -3) = %d\n", result); // Expected output: -1

    // Test case 5: Dividend is zero
    result = modulus(0, 3);
    printf("modulus(0, 3) = %d\n", result); // Expected output: 0

    // Test case 6: Divisor is larger than dividend
    result = modulus(3, 10);
    printf("modulus(3, 10) = %d\n", result); // Expected output: 3

    // Test case 7: Divisor is 1
    result = modulus(10, 1);
    printf("modulus(10, 1) = %d\n", result); // Expected output: 0

    // Test case 8: Divisor is -1
    result = modulus(10, -1);
    printf("modulus(10, -1) = %d\n", result); // Expected output: 0

    return 0;
}
