#include "stdio.h"

int square(int a) {
    return a * a;
}

int main() {
    int test1 = 5;
    int test2 = 0;
    int test3 = -3;

    printf("Test 1: %d\n", square(test1));  // Expected output: 25
    printf("Test 2: %d\n", square(test2));  // Expected output: 0
    printf("Test 3: %d\n", square(test3));  // Expected output: 9

    return 0;
}