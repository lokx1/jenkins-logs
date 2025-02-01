#include "stdio.h"

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("Factorial of 0 is %d\n", factorial(0)); // Expected output: Factorial of 0 is 1
    printf("Factorial of 1 is %d\n", factorial(1)); // Expected output: Factorial of 1 is 1
    printf("Factorial of 2 is %d\n", factorial(2)); // Expected output: Factorial of 2 is 2
    printf("Factorial of 3 is %d\n", factorial(3)); // Expected output: Factorial of 3 is 6
    printf("Factorial of 4 is %d\n", factorial(4)); // Expected output: Factorial of 4 is 24
    printf("Factorial of 5 is %d\n", factorial(5)); // Expected output: Factorial of 5 is 120
    printf("Factorial of 6 is %d\n", factorial(6)); // Expected output: Factorial of 6 is 720
    printf("Factorial of 7 is %d\n", factorial(7)); // Expected output: Factorial of 7 is 5040
    printf("Factorial of 8 is %d\n", factorial(8)); // Expected output: Factorial of 8 is 40320
    printf("Factorial of 9 is %d\n", factorial(9)); // Expected output: Factorial of 9 is 362880
    printf("Factorial of 10 is %d\n", factorial(10)); // Expected output: Factorial of 10 is 3628800

    return 0;
}