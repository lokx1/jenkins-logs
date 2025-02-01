
#include "stdio.h"

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("factorial(0) = %d\n", factorial(0)); // Expected output: 1
    printf("factorial(1) = %d\n", factorial(1)); // Expected output: 1
    printf("factorial(2) = %d\n", factorial(2)); // Expected output: 2
    printf("factorial(3) = %d\n", factorial(3)); // Expected output: 6
    printf("factorial(4) = %d\n", factorial(4)); // Expected output: 24
    printf("factorial(5) = %d\n", factorial(5)); // Expected output: 120
    printf("factorial(10) = %d\n", factorial(10)); // Expected output: 3628800
    return 0;
}
