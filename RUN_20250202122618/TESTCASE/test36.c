
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void test_fibonacci() {
    // Test case 1: Fibonacci of 0
    int result = fibonacci(0);
    printf("Test 1: fibonacci(0) = %d (Expected: 0)\n", result);

    // Test case 2: Fibonacci of 1
    result = fibonacci(1);
    printf("Test 2: fibonacci(1) = %d (Expected: 1)\n", result);

    // Test case 3: Fibonacci of 5
    result = fibonacci(5);
    printf("Test 3: fibonacci(5) = %d (Expected: 5)\n", result);

    // Test case 4: Fibonacci of 10
    result = fibonacci(10);
    printf("Test 4: fibonacci(10) = %d (Expected: 55)\n", result);

    // Test case 5: Fibonacci of 15
    result = fibonacci(15);
    printf("Test 5: fibonacci(15) = %d (Expected: 610)\n", result);
}

int main() {
    test_fibonacci();
    return 0;
}
