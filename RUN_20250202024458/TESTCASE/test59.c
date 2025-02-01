#include "stdio.h"

int cube(int a) {
    return a * a * a;
}

int main() {
    // Test case 1: Positive number
    printf("%d\n", cube(2)); // Expected output: 8

    // Test case 2: Zero
    printf("%d\n", cube(0)); // Expected output: 0

    // Test case 3: Negative number
    printf("%d\n", cube(-3)); // Expected output: -27

    // Test case 4: Large number
    printf("%d\n", cube(100)); // Expected output: 1000000

    return 0;
}