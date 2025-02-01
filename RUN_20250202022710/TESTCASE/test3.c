#include "stdio.h"

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result;

    result = multiply(5, 10);
    printf("Result of 5 * 10: %d\n", result);

    result = multiply(-5, 10);
    printf("Result of -5 * 10: %d\n", result);

    result = multiply(0, 10);
    printf("Result of 0 * 10: %d\n", result);

    result = multiply(10, 1);
    printf("Result of 10 * 1: %d\n", result);

    return 0;
}