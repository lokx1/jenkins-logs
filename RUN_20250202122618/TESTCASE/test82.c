
#include "stdio.h"

int square(int a) {
    return a * a;
}

int main() {
    // Test case 1: Positive integer
    int result1 = square(5);
    printf("square(5) = %d\n", result1); // Expected output: 25

    // Test case 2: Negative integer
    int result2 = square(-3);
    printf("square(-3) = %d\n", result2); // Expected output: 9

    // Test case 3: Zero
    int result3 = square(0);
    printf("square(0) = %d\n", result3); // Expected output: 0

    // Test case 4: Large positive integer
    int result4 = square(1000);
    printf("square(1000) = %d\n", result4); // Expected output: 1000000

    // Test case 5: Large negative integer
    int result5 = square(-1000);
    printf("square(-1000) = %d\n", result5); // Expected output: 1000000

    return 0;
}
