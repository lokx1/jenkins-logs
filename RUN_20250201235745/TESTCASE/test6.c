
#include "stdio.h"

int cube(int a) {
    return a * a * a;
}

int main() {
    printf("cube(0) = %d\n", cube(0)); // Test case 1: Edge case
    printf("cube(1) = %d\n", cube(1)); // Test case 2: Small positive number
    printf("cube(-1) = %d\n", cube(-1)); // Test case 3: Small negative number
    printf("cube(2) = %d\n", cube(2)); // Test case 4: Another small positive number
    printf("cube(-2) = %d\n", cube(-2)); // Test case 5: Another small negative number
    printf("cube(10) = %d\n", cube(10)); // Test case 6: Larger positive number
    printf("cube(-10) = %d\n", cube(-10)); // Test case 7: Larger negative number
    printf("cube(100) = %d\n", cube(100)); // Test case 8: Very large positive number
    printf("cube(-100) = %d\n", cube(-100)); // Test case 9: Very large negative number
    return 0;
}
