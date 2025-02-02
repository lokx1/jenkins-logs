
#include "stdio.h"

int divide(int a, int b) {
    return b != 0 ? a / b : 0; // Return 0 if division by zero
}

int main() {
    printf("Test Case 1: divide(10, 2) = %d\n", divide(10, 2)); // Expected output: 5
    printf("Test Case 2: divide(10, 0) = %d\n", divide(10, 0)); // Expected output: 0
    printf("Test Case 3: divide(0, 5) = %d\n", divide(0, 5)); // Expected output: 0
    printf("Test Case 4: divide(-10, 2) = %d\n", divide(-10, 2)); // Expected output: -5
    printf("Test Case 5: divide(10, -2) = %d\n", divide(10, -2)); // Expected output: -5
    printf("Test Case 6: divide(-10, -2) = %d\n", divide(-10, -2)); // Expected output: 5
    printf("Test Case 7: divide(7, 3) = %d\n", divide(7, 3)); // Expected output: 2
    printf("Test Case 8: divide(1, 1) = %d\n", divide(1, 1)); // Expected output: 1
    printf("Test Case 9: divide(1, -1) = %d\n", divide(1, -1)); // Expected output: -1
    printf("Test Case 10: divide(-1, 1) = %d\n", divide(-1, 1)); // Expected output: -1
    return 0;
}
