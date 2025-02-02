
#include <stdio.h>

void test_positive_number() {
    int num = 5;
    if (num > 0) {
        printf("Number is positive.\n");
    } else if (num < 0) {
        printf("Number is negative.\n");
    } else {
        printf("Number is zero.\n");
    }
}

void test_negative_number() {
    int num = -3;
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
    printf("Test case 1: Positive number\n");
    test_positive_number();
    
    printf("Test case 2: Negative number\n");
    test_negative_number();
    
    printf("Test case 3: Zero\n");
    test_zero_number();
    
    return 0;
}
