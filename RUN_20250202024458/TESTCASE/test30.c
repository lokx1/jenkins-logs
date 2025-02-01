#include "stdio.h"

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("Factorial of 0 is %d\n", factorial(0)); // Expected output: 1
    printf("Factorial of 1 is %d\n", factorial(1)); // Expected output: 1
    printf("Factorial of 2 is %d\n", factorial(2)); // Expected output: 2
    printf("Factorial of 3 is %d\n", factorial(3)); // Expected output: 6
    printf("Factorial of 4 is %d\n", factorial(4)); // Expected output: 24
    printf("Factorial of 5 is %d\n", factorial(5)); // Expected output: 120
    printf("Factorial of 6 is %d\n", factorial(6)); // Expected output: 720

    return 0;
}