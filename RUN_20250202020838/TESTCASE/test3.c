#include "stdio.h"

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int a = 5, b = 10;
    int result = multiply(a, b);
    printf("Test 1 - Expected Result : 50, Actual Result : %d\n", result);

    a = 0, b = 10;
    result = multiply(a, b);
    printf("Test 2 - Expected Result : 0, Actual Result : %d\n", result);

    a = -5, b = -10;
    result = multiply(a, b);
    printf("Test 3 - Expected Result : 50, Actual Result : %d\n", result);

    a = -5, b = 10;
    result = multiply(a, b);
    printf("Test 4 - Expected Result : -50, Actual Result : %d\n", result);

    return 0;
}