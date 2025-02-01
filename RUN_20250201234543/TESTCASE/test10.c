
#include "stdio.h"

int square(int a) {
    return a * a;
}

int main() {
    printf("Test Case 1: square(0) = %d\n", square(0)); // Expected output: 0
    printf("Test Case 2: square(1) = %d\n", square(1)); // Expected output: 1
    printf("Test Case 3: square(-1) = %d\n", square(-1)); // Expected output: 1
    printf("Test Case 4: square(2) = %d\n", square(2)); // Expected output: 4
    printf("Test Case 5: square(-2) = %d\n", square(-2)); // Expected output: 4
    printf("Test Case 6: square(10) = %d\n", square(10)); // Expected output: 100
    printf("Test Case 7: square(-10) = %d\n", square(-10)); // Expected output: 100
    return 0;
}
