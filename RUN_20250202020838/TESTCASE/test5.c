#include "stdio.h"

int divide(int a, int b) {
    return b != 0 ? a / b : 0;
}

int main() {
    printf("%d\n", divide(10, 2)); // Expected output: 5
    printf("%d\n", divide(10, 0)); // Expected output: 0
    printf("%d\n", divide(0, 10)); // Expected output: 0
    printf("%d\n", divide(-10, 2)); // Expected output: -5
    printf("%d\n", divide(10, -2)); // Expected output: -5
    printf("%d\n", divide(-10, -2)); // Expected output: 5
    return 0;
}