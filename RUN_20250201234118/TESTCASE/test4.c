
#include "stdio.h"

int cube(int a) {
    return a * a * a;
}

int main() {
    printf("cube(2) = %d\n", cube(2));    // Expected output: 8
    printf("cube(-3) = %d\n", cube(-3));  // Expected output: -27
    printf("cube(0) = %d\n", cube(0));    // Expected output: 0
    printf("cube(5) = %d\n", cube(5));    // Expected output: 125
    printf("cube(10) = %d\n", cube(10));  // Expected output: 1000
    return 0;
}
