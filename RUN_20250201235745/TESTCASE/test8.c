
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
    printf("Test Case 3: power(3, 4) = %d\n", power(3, 4)); // Expected output: 81
    printf("Test Case 4: power(-2, 3) = %d\n", power(-2, 3)); // Expected output: -8
    printf("Test Case 5: power(2, 10) = %d\n", power(2, 10)); // Expected output: 1024
    printf("Test Case 6: power(1, 100) = %d\n", power(1, 100)); // Expected output: 1
    printf("Test Case 7: power(0, 5) = %d\n", power(0, 5)); // Expected output: 0
    printf("Test Case 8: power(0, 0) = %d\n", power(0, 0)); // Expected output: 1 (conventionally)
    return 0;
}
