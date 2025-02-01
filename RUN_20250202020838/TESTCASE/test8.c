#include "stdio.h"

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    printf("%d\n", power(2, 3)); // Should print 8
    printf("%d\n", power(5, 0)); // Should print 1
    printf("%d\n", power(10, 1)); // Should print 10
    printf("%d\n", power(7, 2)); // Should print 49
    printf("%d\n", power(3, 3)); // Should print 27

    return 0;
}