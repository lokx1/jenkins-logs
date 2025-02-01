
#include "stdio.h"

int cube(int a) {
    return a * a * a;
}

int main() {
    printf("cube(%d) = %d\n", 0, cube(0)); // Test case 1: zero
    printf("cube(%d) = %d\n", 1, cube(1)); // Test case 2: positive number
    printf("cube(%d) = %d\n", -1, cube(-1)); // Test case 3: negative number
    printf("cube(%d) = %d\n", 2, cube(2)); // Test case 4: positive number
    printf("cube(%d) = %d\n", -2, cube(-2)); // Test case 5: negative number
    printf("cube(%d) = %d\n", 10, cube(10)); // Test case 6: larger positive number
    printf("cube(%d) = %d\n", -10, cube(-10)); // Test case 7: larger negative number
    return 0;
}
