
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num1 = 5;
    printf("Factorial of %d: %d\n", num1, factorial(num1));

    int num2 = 0;
    printf("Factorial of %d: %d\n", num2, factorial(num2));

    int num3 = 1;
    printf("Factorial of %d: %d\n", num3, factorial(num3));

    int num4 = 10;
    printf("Factorial of %d: %d\n", num4, factorial(num4));

    int num5 = 3;
    printf("Factorial of %d: %d\n", num5, factorial(num5));

    return 0;
}
