
#include "stdio.h"

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    printf("Test Case 1: max(3, 5) = %d\n", max(3, 5)); // Expected output: 5
    printf("Test Case 2: max(10, 10) = %d\n", max(10, 10)); // Expected output: 10
    printf("Test Case 3: max(-3, -7) = %d\n", max(-3, -7)); // Expected output: -3
    printf("Test Case 4: max(0, 0) = %d\n", max(0, 0)); // Expected output: 0
    printf("Test Case 5: max(-5, 5) = %d\n", max(-5, 5)); // Expected output: 5
    return 0;
}
