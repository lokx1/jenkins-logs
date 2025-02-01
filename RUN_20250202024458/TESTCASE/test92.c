#include "stdio.h"

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int a = 5, b = 10;
    printf("Min between %d and %d is %d\n", a, b, min(a, b));

    a = 15; b = 10;
    printf("Min between %d and %d is %d\n", a, b, min(a, b));

    a = 10; b = 10;
    printf("Min between %d and %d is %d\n", a, b, min(a, b));

    return 0;
}