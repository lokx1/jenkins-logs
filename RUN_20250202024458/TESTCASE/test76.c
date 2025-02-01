#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));

    num = 0;
    printf("Factorial of %d is %d\n", num, factorial(num));

    num = 1;
    printf("Factorial of %d is %d\n", num, factorial(num));

    num = 10;
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}