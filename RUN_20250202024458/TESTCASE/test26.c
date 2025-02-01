#include "stdio.h"

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    printf("%d\n", max(5, 10)); // Expected output: 10
    printf("%d\n", max(20, 10)); // Expected output: 20
    printf("%d\n", max(-5, -10)); // Expected output: -5
    printf("%d\n", max(0, 0)); // Expected output: 0
    printf("%d\n", max(-5, 5)); // Expected output: 5

    return 0;
}