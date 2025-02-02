
#include "stdio.h"

int cube(int a) {
    return a * a * a;
}

int main() {
    // Test case 1: Positive number
    int result1 = cube(3);
    printf("cube(3) = %d\n", result1); // Expected output: 27

    // Test case 2: Negative number
    int result2 = cube(-2);
    printf("cube(-2) = %d\n", result2); // Expected output: -8

    // Test case 3: Zero
    int result3 = cube(0);
    printf("cube(0) = %d\n", result3); // Expected output: 0

    // Test case 4: Large positive number
    int result4 = cube(10);
    printf("cube(10) = %d\n", result4); // Expected output: 1000

    // Test case 5: Large negative number
    int result5 = cube(-5);
    printf("cube(-5) = %d\n", result5); // Expected output: -125

    return 0;
}
