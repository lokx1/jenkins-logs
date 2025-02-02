
#include "stdio.h"

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    printf("Test Case 1: min(3, 5) = %d\n", min(3, 5)); // Expected output: 3
    printf("Test Case 2: min(-1, 1) = %d\n", min(-1, 1)); // Expected output: -1
    printf("Test Case 3: min(10, 10) = %d\n", min(10, 10)); // Expected output: 10
    printf("Test Case 4: min(-5, -10) = %d\n", min(-5, -10)); // Expected output: -10
    printf("Test Case 5: min(0, 0) = %d\n", min(0, 0)); // Expected output: 0
    return 0;
}
