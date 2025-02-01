#include "stdio.h"

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int result;

    result = subtract(10, 5);
    printf("Test 1 - Expected Result : 5, Actual Result : %d\n", result);

    result = subtract(-5, -10);
    printf("Test 2 - Expected Result : 5, Actual Result : %d\n", result);

    result = subtract(0, 0);
    printf("Test 3 - Expected Result : 0, Actual Result : %d\n", result);

    result = subtract(100, 200);
    printf("Test 4 - Expected Result : -100, Actual Result : %d\n", result);

    return 0;
}