#include <stdio.h>
#include "p53.c"

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number is positive.\n");
        assert(isPositive(num));
    } else if (num < 0) {
        printf("The number is negative.\n");
        assert(!isPositive(num));
    } else {
        printf("The number is zero.\n");
        assert(isZero(num));
    }

    return 0;
}