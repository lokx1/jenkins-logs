#include <stdio.h>
#include "p5.c"

int main() {
    int num = 10;

    if (num > 0) {
        printf("Number is positive.\n");
    } else if (num < 0) {
        printf("Number is negative.\n");
    } else {
        printf("Number is zero.\n");
    }

    return 0;
}