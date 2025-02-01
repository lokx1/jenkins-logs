#include "stdio.h"

int cube(int a) {
    return a * a * a;
}

int main() {
    int test1 = 3;
    int result1 = cube(test1);
    printf("Cube of %d is %d\n", test1, result1);

    int test2 = 0;
    int result2 = cube(test2);
    printf("Cube of %d is %d\n", test2, result2);

    int test3 = -5;
    int result3 = cube(test3);
    printf("Cube of %d is %d\n", test3, result3);

    return 0;
}