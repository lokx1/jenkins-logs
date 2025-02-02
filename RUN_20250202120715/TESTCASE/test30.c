
#include "stdio.h"

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("factorial(0) = %d\n", factorial(0)); // Test case: 0! = 1
    printf("factorial(1) = %d\n", factorial(1)); // Test case: 1! = 1
    printf("factorial(2) = %d\n", factorial(2)); // Test case: 2! = 2
    printf("factorial(3) = %d\n", factorial(3)); // Test case: 3! = 6
    printf("factorial(4) = %d\n", factorial(4)); // Test case: 4! = 24
    printf("factorial(5) = %d\n", factorial(5)); // Test case: 5! = 120
    printf("factorial(6) = %d\n", factorial(6)); // Test case: 6! = 720
    return 0;
}
