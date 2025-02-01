#include "stdio.h"

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int a = 5;
    int b = 10;
    int result = multiply(a, b);
    printf("The product of %d and %d is %d\n", a, b, result);

    a = -3;
    b = 7;
    result = multiply(a, b);
    printf("The product of %d and %d is %d\n", a, b, result);

    a = 0;
    b = 10;
    result = multiply(a, b);
    printf("The product of %d and %d is %d\n", a, b, result);

    return 0;
}