
#include "stdio.h"

int divide(int a, int b) {
    return b != 0 ? a / b : 0; // Return 0 if division by zero
}

int main() {
    printf("Test 1: divide(10, 2) = %d\n", divide(10, 2)); // Expected output: 5
    printf("Test 2: divide(10, 0) = %d\n", divide(10, 0)); // Expected output: 0
    printf("Test 3: divide(-10, 2) = %d\n", divide(-10, 2)); // Expected output: -5
    printf("Test 4: divide(10, -2) = %d\n", divide(10, -2)); // Expected output: -5
    printf("Test 5: divide(-10, -2) = %d\n", divide(-10, -2)); // Expected output: 5
    printf("Test 6: divide(0, 5) = %d\n", divide(0, 5)); // Expected output: 0
    printf("Test 7: divide(5, 5) = %d\n", divide(5, 5)); // Expected output: 1
    printf("Test 8: divide(1, 3) = %d\n", divide(1, 3)); // Expected output: 0
    return 0;
}
