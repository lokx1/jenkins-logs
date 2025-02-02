
#include "stdio.h"

int modulus(int a, int b) {
    return a % b;
}

int main() {
    // Test case 1: positive numbers
    int result1 = modulus(10, 3);
    printf("modulus(10, 3) = %d\n", result1); // Expected output: 1

    // Test case 2: negative dividend
    int result2 = modulus(-10, 3);
    printf("modulus(-10, 3) = %d\n", result2); // Expected output: -1

    // Test case 3: negative divisor
    int result3 = modulus(10, -3);
    printf("modulus(10, -3) = %d\n", result3); // Expected output: 1

    // Test case 4: both numbers negative
    int result4 = modulus(-10, -3);
    printf("modulus(-10, -3) = %d\n", result4); // Expected output: -1

    // Test case 5: dividend is zero
    int result5 = modulus(0, 3);
    printf("modulus(0, 3) = %d\n", result5); // Expected output: 0

    // Test case 6: divisor is one
    int result6 = modulus(10, 1);
    printf("modulus(10, 1) = %d\n", result6); // Expected output: 0

    // Test case 7: divisor is negative one
    int result7 = modulus(10, -1);
    printf("modulus(10, -1) = %d\n", result7); // Expected output: 0

    // Test case 8: large numbers
    int result8 = modulus(123456, 789);
    printf("modulus(123456, 789) = %d\n", result8); // Expected output: 372

    return 0;
}
