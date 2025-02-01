
#include "stdio.h"

int cube(int a) {
    return a * a * a;
}

int main() {
    printf("cube(0) = %d\n", cube(0));
    printf("cube(1) = %d\n", cube(1));
    printf("cube(-1) = %d\n", cube(-1));
    printf("cube(2) = %d\n", cube(2));
    printf("cube(-2) = %d\n", cube(-2));
    printf("cube(3) = %d\n", cube(3));
    printf("cube(-3) = %d\n", cube(-3));
    printf("cube(10) = %d\n", cube(10));
    printf("cube(-10) = %d\n", cube(-10));
    return 0;
}
