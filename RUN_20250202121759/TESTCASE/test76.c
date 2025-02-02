
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void test_factorial() {
    int num;
    int result;

    // Test case 1: Factorial of 0
    num = 0;
    result = factorial(num);
    printf("Test case 1: Factorial of %d is %d\n", num, result);

    // Test case 2: Factorial of 1
    num = 1;
    result = factorial(num);
    printf("Test case 2: Factorial of %d is %d\n", num, result);

    // Test case 3: Factorial of 5
    num = 5;
    result = factorial(num);
    printf("Test case 3: Factorial of %d is %d\n", num, result);

    // Test case 4: Factorial of 10
    num = 10;
    result = factorial(num);
    printf("Test case 4: Factorial of %d is %d\n", num, result);
}

int main() {
    test_factorial();
    return 0;
}
