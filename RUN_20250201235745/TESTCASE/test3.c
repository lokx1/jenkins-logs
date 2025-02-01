
#include "stdio.h"

int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Test case 1
    int result1 = multiply(3, 4);
    printf("multiply(3, 4) = %d\n", result1);

    // Test case 2
    int result2 = multiply(0, 5);
    printf("multiply(0, 5) = %d\n", result2);

    // Test case 3
    int result3 = multiply(-2, 6);
    printf("multiply(-2, 6) = %d\n", result3);

    // Test case 4
    int result4 = multiply(7, -8);
    printf("multiply(7, -8) = %d\n", result4);

    // Test case 5
    int result5 = multiply(-3, -9);
    printf("multiply(-3, -9) = %d\n", result5);

    // Test case 6
    int result6 = multiply(2147483647, 1);
    printf("multiply(2147483647, 1) = %d\n", result6);

    // Test case 7
    int result7 = multiply(-2147483648, 1);
    printf("multiply(-2147483648, 1) = %d\n", result7);

    return 0;
}
