
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void test_fibonacci() {
    printf("Test Case 1: Fibonacci of 0\n");
    printf("Expected: 0, Got: %d\n", fibonacci(0));

    printf("Test Case 2: Fibonacci of 1\n");
    printf("Expected: 1, Got: %d\n", fibonacci(1));

    printf("Test Case 3: Fibonacci of 2\n");
    printf("Expected: 1, Got: %d\n", fibonacci(2));

    printf("Test Case 4: Fibonacci of 3\n");
    printf("Expected: 2, Got: %d\n", fibonacci(3));

    printf("Test Case 5: Fibonacci of 4\n");
    printf("Expected: 3, Got: %d\n", fibonacci(4));

    printf("Test Case 6: Fibonacci of 5\n");
    printf("Expected: 5, Got: %d\n", fibonacci(5));

    printf("Test Case 7: Fibonacci of 10\n");
    printf("Expected: 55, Got: %d\n", fibonacci(10));
}

int main() {
    test_fibonacci();
    return 0;
}
