#include "stdio.h"

int modulus(int a, int b) {
    return a % b;
}

int main() {
    int a = 10;
    int b = 3;

    int result = modulus(a, b);
    printf("The modulus of %d and %d is: %d\n", a, b, result);

    a = 20;
    b = 5;

    result = modulus(a, b);
    printf("The modulus of %d and %d is: %d\n", a, b, result);

    a = -10;
    b = 3;

    result = modulus(a, b);
    printf("The modulus of %d and %d is: %d\n", a, b, result);

    a = 10;
    b = -3;

    result = modulus(a, b);
    printf("The modulus of %d and %d is: %d\n", a, b, result);

    return 0;
}