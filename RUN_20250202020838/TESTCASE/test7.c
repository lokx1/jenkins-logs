#include "stdio.h"

int modulus(int a, int b) {
    return a % b;
}

int main() {
    // Test case 1: Positive numbers
    printf("Test case 1: %d\n", modulus(10, 3));  // Expected output: 1

    // Test case 2: Negative numbers
    printf("Test case 2: %d\n", modulus(-10, 3));  // Expected output: -1

    // Test case 3: Zero as the first argument
    printf("Test case 3: %d\n", modulus(0, 3));  // Expected output: 0

    // Test case 4: Zero as the second argument
    printf("Test case 4: %d\n", modulus(10, 0));  // This will cause a runtime error

    return 0;
}