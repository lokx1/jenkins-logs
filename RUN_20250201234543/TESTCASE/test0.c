
#include "stdio.h"

int subtract(int a, int b) {
    return a - b;
}

int main() {
    printf("Test Case 1: subtract(5, 3) = %d\n", subtract(5, 3)); // Expected output: 2
    printf("Test Case 2: subtract(3, 5) = %d\n", subtract(3, 5)); // Expected output: -2
    printf("Test Case 3: subtract(0, 0) = %d\n", subtract(0, 0)); // Expected output: 0
    printf("Test Case 4: subtract(-5, -3) = %d\n", subtract(-5, -3)); // Expected output: -2
    printf("Test Case 5: subtract(-3, -5) = %d\n", subtract(-3, -5)); // Expected output: 2
    printf("Test Case 6: subtract(0, 5) = %d\n", subtract(0, 5)); // Expected output: -5
    printf("Test Case 7: subtract(5, 0) = %d\n", subtract(5, 0)); // Expected output: 5
    return 0;
}
