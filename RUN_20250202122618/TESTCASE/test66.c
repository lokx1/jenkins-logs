
#include "stdio.h"

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    printf("Test 1: power(2, 3) = %d\n", power(2, 3)); // Expected output: 8
    printf("Test 2: power(5, 0) = %d\n", power(5, 0)); // Expected output: 1
    printf("Test 3: power(3, 2) = %d\n", power(3, 2)); // Expected output: 9
    printf("Test 4: power(0, 5) = %d\n", power(0, 5)); // Expected output: 0
    printf("Test 5: power(1, 10) = %d\n", power(1, 10)); // Expected output: 1
    printf("Test 6: power(-2, 3) = %d\n", power(-2, 3)); // Expected output: -8
    printf("Test 7: power(2, -3) = %d\n", power(2, -3)); // Expected output: 1 (no handling for negative exponents)
    return 0;
}
