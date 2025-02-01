
#include "stdio.h"

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("factorial(0) = %d\n", factorial(0)); // Test case for 0
    printf("factorial(1) = %d\n", factorial(1)); // Test case for 1
    printf("factorial(2) = %d\n", factorial(2)); // Test case for 2
    printf("factorial(5) = %d\n", factorial(5)); // Test case for a small positive number
    printf("factorial(10) = %d\n", factorial(10)); // Test case for a larger positive number
    return 0;
}
