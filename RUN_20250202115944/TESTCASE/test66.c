
#include "stdio.h"

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    printf("Test Case 1: power(2, 3) = %d\n", power(2, 3)); // Expected output: 8
    printf("Test Case 2: power(5, 0) = %d\n", power(5, 0)); // Expected output: 1
    printf("Test Case 3: power(1, 5) = %d\n", power(1, 5)); // Expected output: 1
    printf("Test Case 4: power(0, 5) = %d\n", power(0, 5)); // Expected output: 0
    printf("Test Case 5: power(3, 2) = %d\n", power(3, 2)); // Expected output: 9
    printf("Test Case 6: power(10, 4) = %d\n", power(10, 4)); // Expected output: 10000
    printf("Test Case 7: power(-2, 3) = %d\n", power(-2, 3)); // Expected output: -8
    printf("Test Case 8: power(-2, 4) = %d\n", power(-2, 4)); // Expected output: 16
    return 0;
}
