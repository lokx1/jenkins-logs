
#include "stdio.h"

int square(int a) {
    return a * a;
}

int main() {
    // Test case 1: Square of 0
    int result1 = square(0);
    printf("square(0) = %d\n", result1); // Expected output: 0

    // Test case 2: Square of 1
    int result2 = square(1);
    printf("square(1) = %d\n", result2); // Expected output: 1

    // Test case 3: Square of a positive number
    int result3 = square(5);
    printf("square(5) = %d\n", result3); // Expected output: 25

    // Test case 4: Square of a negative number
    int result4 = square(-3);
    printf("square(-3) = %d\n", result4); // Expected output: 9

    // Test case 5: Square of a larger positive number
    int result5 = square(10);
    printf("square(10) = %d\n", result5); // Expected output: 100

    return 0;
}
