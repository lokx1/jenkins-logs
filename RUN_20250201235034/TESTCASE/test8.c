
#include "stdio.h"

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    printf("power(2, 3) = %d\n", power(2, 3)); // Expected output: 8
    printf("power(5, 0) = %d\n", power(5, 0)); // Expected output: 1
    printf("power(7, 1) = %d\n", power(7, 1)); // Expected output: 7
    printf("power(3, 4) = %d\n", power(3, 4)); // Expected output: 81
    printf("power(10, 2) = %d\n", power(10, 2)); // Expected output: 100
    printf("power(0, 5) = %d\n", power(0, 5)); // Expected output: 0
    printf("power(2, 10) = %d\n", power(2, 10)); // Expected output: 1024
    printf("power(-2, 3) = %d\n", power(-2, 3)); // Expected output: -8
    printf("power(-2, 2) = %d\n", power(-2, 2)); // Expected output: 4
    return 0;
}
