#include "stdio.h"

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    printf("%d\n", power(2, 3));  // Expected output: 8
    printf("%d\n", power(5, 0));  // Expected output: 1
    printf("%d\n", power(10, 1)); // Expected output: 10
    printf("%d\n", power(3, 3));  // Expected output: 27
    printf("%d\n", power(7, 2));  // Expected output: 49
    return 0;
}