
#include "stdio.h"

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("factorial(0) = %d\n", factorial(0)); // Expected: 1
    printf("factorial(1) = %d\n", factorial(1)); // Expected: 1
    printf("factorial(2) = %d\n", factorial(2)); // Expected: 2
    printf("factorial(3) = %d\n", factorial(3)); // Expected: 6
    printf("factorial(4) = %d\n", factorial(4)); // Expected: 24
    printf("factorial(5) = %d\n", factorial(5)); // Expected: 120
    printf("factorial(10) = %d\n", factorial(10)); // Expected: 3628800
    return 0;
}
