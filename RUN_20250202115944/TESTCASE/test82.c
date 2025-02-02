
#include "stdio.h"

int square(int a) {
    return a * a;
}

int main() {
    int test1 = 0;
    int test2 = -3;
    int test3 = 4;
    int test4 = 10;

    printf("square(%d) = %d\n", test1, square(test1)); // Expected output: 0
    printf("square(%d) = %d\n", test2, square(test2)); // Expected output: 9
    printf("square(%d) = %d\n", test3, square(test3)); // Expected output: 16
    printf("square(%d) = %d\n", test4, square(test4)); // Expected output: 100

    return 0;
}
