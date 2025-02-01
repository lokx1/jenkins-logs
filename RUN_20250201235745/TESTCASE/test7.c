
#include "stdio.h"

int modulus(int a, int b) {
    return a % b;
}

int main() {
    int result;

    // Test case 1: Positive numbers
    result = modulus(10, 3);
    printf("modulus(10, 3) = %d\n", result);

    // Test case 2: Negative dividend
    result = modulus(-10, 3);
    printf("modulus(-10, 3) = %d\n", result);

    // Test case 3: Negative divisor
    result = modulus(10, -3);
    printf("modulus(10, -3) = %d\n", result);

    // Test case 4: Negative dividend and divisor
    result = modulus(-10, -3);
    printf("modulus(-10, -3) = %d\n", result);

    // Test case 5: Dividend is zero
    result = modulus(0, 3);
    printf("modulus(0, 3) = %d\n", result);

    // Test case 6: Divisor is zero (should not be executed, but handled)
    // Uncommenting the following line will cause a runtime error
    // result = modulus(10, 0);
    // printf("modulus(10, 0) = %d\n", result);

    return 0;
}
