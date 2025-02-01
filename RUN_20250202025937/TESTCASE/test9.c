
#include <stdio.h>

void test_positive_number() {
    int num = 10;
    if (num > 0) {
        printf("Number is positive.\n");
    } else if (num < 0) {
        printf("Number is negative.\n");
    } else {
        printf("Number is zero.\n");
    }
}

void test_negative_number() {
    int num = -5;
    if (num > 0) {
        printf("Number is positive.\n");
    } else if (num < 0) {
        printf("Number is negative.\n");
    } else {
        printf("Number is zero.\n");
    }
}

void test_zero_number() {
    int num = 0;
    if (num > 0) {
        printf("Number is positive.\n");
    } else if (num < 0) {
        printf("Number is negative.\n");
    } else {
        printf("Number is zero.\n");
    }
}

int main() {
    test_positive_number();
    test_negative_number();
    test_zero_number();
    return 0;
}
