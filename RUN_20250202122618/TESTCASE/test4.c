
#include "stdio.h"

int subtract(int a, int b) {
    return a - b;
}

int main() {
    printf("Test Case 1: subtract(10, 5) = %d\n", subtract(10, 5)); // Expected output: 5
    printf("Test Case 2: subtract(0, 0) = %d\n", subtract(0, 0));   // Expected output: 0
    printf("Test Case 3: subtract(-5, -10) = %d\n", subtract(-5, -10)); // Expected output: 5
    printf("Test Case 4: subtract(5, 10) = %d\n", subtract(5, 10)); // Expected output: -5
    printf("Test Case 5: subtract(100, 50) = %d\n", subtract(100, 50)); // Expected output: 50
    return 0;
}
