#include "stdio.h"

int cube(int a) {
    return a * a * a;
}

int main() {
    // Test case 1: Positive number
    printf("%d\n", cube(3)); // Expected output: 27

    // Test case 2: Negative number
    printf("%d\n", cube(-3)); // Expected output: -27

    // Test case 3: Zero
    printf("%d\n", cube(0)); // Expected output: 0

    return 0;
}