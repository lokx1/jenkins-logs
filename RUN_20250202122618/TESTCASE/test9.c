
#include <stdio.h>

void test_positive_number() {
    int num = 10;
    if (num > 0) {
        printf("Test positive: Number is positive.\n");
    } else if (num < 0) {
        printf("Test positive: Number is negative.\n");
    } else {
        printf("Test positive: Number is zero.\n");
    }
}

void test_negative_number() {
    int num = -5;
    if (num > 0) {
        printf("Test negative: Number is positive.\n");
    } else if (num < 0) {
        printf("Test negative: Number is negative.\n");
    } else {
        printf("Test negative: Number is zero.\n");
    }
}

void test_zero_number() {
    int num = 0;
    if (num > 0) {
        printf("Test zero: Number is positive.\n");
    } else if (num < 0) {
        printf("Test zero: Number is negative.\n");
    } else {
        printf("Test zero: Number is zero.\n");
    }
}

int main() {
    test_positive_number();
    test_negative_number();
    test_zero_number();
    return 0;
}
