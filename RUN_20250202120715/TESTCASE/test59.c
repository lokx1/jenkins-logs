
#include "stdio.h"

int cube(int a) {
    return a * a * a;
}

int main() {
    printf("cube(0) = %d\n", cube(0));     // Test case 1: zero
    printf("cube(1) = %d\n", cube(1));     // Test case 2: positive number
    printf("cube(-1) = %d\n", cube(-1));   // Test case 3: negative number
    printf("cube(2) = %d\n", cube(2));     // Test case 4: small positive number
    printf("cube(-2) = %d\n", cube(-2));   // Test case 5: small negative number
    printf("cube(10) = %d\n", cube(10));   // Test case 6: larger positive number
    printf("cube(-10) = %d\n", cube(-10)); // Test case 7: larger negative number
    return 0;
}
