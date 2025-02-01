
#include "stdio.h"

int modulus(int a, int b) {
    return a % b;
}

int main() {
    // Test case 1: Positive numbers
    int a1 = 10, b1 = 3;
    printf("modulus(%d, %d) = %d\n", a1, b1, modulus(a1, b1)); // Expected output: 1

    // Test case 2: Negative dividend
    int a2 = -10, b2 = 3;
    printf("modulus(%d, %d) = %d\n", a2, b2, modulus(a2, b2)); // Expected output: -1

    // Test case 3: Negative divisor
    int a3 = 10, b3 = -3;
    printf("modulus(%d, %d) = %d\n", a3, b3, modulus(a3, b3)); // Expected output: 1

    // Test case 4: Both negative
    int a4 = -10, b4 = -3;
    printf("modulus(%d, %d) = %d\n", a4, b4, modulus(a4, b4)); // Expected output: -1

    // Test case 5: Dividend is zero
    int a5 = 0, b5 = 3;
    printf("modulus(%d, %d) = %d\n", a5, b5, modulus(a5, b5)); // Expected output: 0

    // Test case 6: Divisor is one
    int a6 = 10, b6 = 1;
    printf("modulus(%d, %d) = %d\n", a6, b6, modulus(a6, b6)); // Expected output: 0

    // Test case 7: Divisor is negative one
    int a7 = 10, b7 = -1;
    printf("modulus(%d, %d) = %d\n", a7, b7, modulus(a7, b7)); // Expected output: 0

    return 0;
}
