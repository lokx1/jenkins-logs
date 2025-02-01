#include "stdio.h"

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    printf("%d\n", max(5, 10));  // Expected output: 10
    printf("%d\n", max(15, 10));  // Expected output: 15
    printf("%d\n", max(-5, -10));  // Expected output: -5
    printf("%d\n", max(0, 0));  // Expected output: 0
    printf("%d\n", max(100, 100));  // Expected output: 100
    return 0;
}