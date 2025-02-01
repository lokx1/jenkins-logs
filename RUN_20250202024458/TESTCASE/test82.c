#include "stdio.h"

int square(int a) {
    return a * a;
}

int main() {
    int test1 = 5;
    int test2 = -3;
    int test3 = 0;

    printf("Test 1 result: %d\n", square(test1)); // Expected output: 25
    printf("Test 2 result: %d\n", square(test2)); // Expected output: 9
    printf("Test 3 result: %d\n", square(test3)); // Expected output: 0

    return 0;
}