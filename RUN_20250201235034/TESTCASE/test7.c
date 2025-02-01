
#include "stdio.h"

int modulus(int a, int b) {
    return a % b;
}

int main() {
    printf("Test Case 1: modulus(10, 3) = %d\n", modulus(10, 3)); // Expected output: 1
    printf("Test Case 2: modulus(10, 5) = %d\n", modulus(10, 5)); // Expected output: 0
    printf("Test Case 3: modulus(10, 7) = %d\n", modulus(10, 7)); // Expected output: 3
    printf("Test Case 4: modulus(-10, 3) = %d\n", modulus(-10, 3)); // Expected output: -1
    printf("Test Case 5: modulus(10, -3) = %d\n", modulus(10, -3)); // Expected output: 1
    printf("Test Case 6: modulus(-10, -3) = %d\n", modulus(-10, -3)); // Expected output: -1
    return 0;
}
