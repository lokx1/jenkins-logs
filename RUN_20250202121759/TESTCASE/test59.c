
#include "stdio.h"

int cube(int a) {
    return a * a * a;
}

int main() {
    printf("cube(0) = %d\n", cube(0)); // Test case 1: edge case
    printf("cube(1) = %d\n", cube(1)); // Test case 2: small positive integer
    printf("cube(-1) = %d\n", cube(-1)); // Test case 3: small negative integer
    printf("cube(2) = %d\n", cube(2)); // Test case 4: positive integer
    printf("cube(-2) = %d\n", cube(-2)); // Test case 5: negative integer
    printf("cube(10) = %d\n", cube(10)); // Test case 6: larger positive integer
    printf("cube(-10) = %d\n", cube(-10)); // Test case 7: larger negative integer
    return 0;
}
