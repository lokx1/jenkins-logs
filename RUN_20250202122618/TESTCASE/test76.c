
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void test_factorial() {
    printf("Test Case 1: Factorial of 0\n");
    printf("Expected: 1, Got: %d\n", factorial(0));

    printf("Test Case 2: Factorial of 1\n");
    printf("Expected: 1, Got: %d\n", factorial(1));

    printf("Test Case 3: Factorial of 5\n");
    printf("Expected: 120, Got: %d\n", factorial(5));

    printf("Test Case 4: Factorial of 10\n");
    printf("Expected: 3628800, Got: %d\n", factorial(10));

    printf("Test Case 5: Factorial of 3\n");
    printf("Expected: 6, Got: %d\n", factorial(3));
}

int main() {
    test_factorial();
    return 0;
}
