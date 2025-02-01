#include "stdio.h"

int is_odd(int a) {
    return a % 2 != 0;
}

int main() {
    int test1 = 3;
    int test2 = 4;
    int test3 = -5;
    int test4 = -6;

    printf("Test 1, input: %d, expected output: 1, actual output: %d\n", test1, is_odd(test1));
    printf("Test 2, input: %d, expected output: 0, actual output: %d\n", test2, is_odd(test2));
    printf("Test 3, input: %d, expected output: 1, actual output: %d\n", test3, is_odd(test3));
    printf("Test 4, input: %d, expected output: 0, actual output: %d\n", test4, is_odd(test4));

    return 0;
}