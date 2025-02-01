
#include "stdio.h"

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    // Test case 1: Factorial of 0
    int result = factorial(0);
    printf("factorial(0) = %d\n", result);

    // Test case 2: Factorial of 1
    result = factorial(1);
    printf("factorial(1) = %d\n", result);

    // Test case 3: Factorial of 5
    result = factorial(5);
    printf("factorial(5) = %d\n", result);

    // Test case 4: Factorial of 10
    result = factorial(10);
    printf("factorial(10) = %d\n", result);

    // Test case 5: Factorial of a negative number
    result = factorial(-3);
    printf("factorial(-3) = %d\n", result);

    return 0;
}
