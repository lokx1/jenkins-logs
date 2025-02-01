#include "stdio.h"

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int test1 = 5;
    int result1 = factorial(test1);
    printf("Factorial of %d is %d\n", test1, result1);

    int test2 = 0;
    int result2 = factorial(test2);
    printf("Factorial of %d is %d\n", test2, result2);

    int test3 = 1;
    int result3 = factorial(test3);
    printf("Factorial of %d is %d\n", test3, result3);

    int test4 = 10;
    int result4 = factorial(test4);
    printf("Factorial of %d is %d\n", test4, result4);

    return 0;
}