#include "stdio.h"

int square(int a) {
    return a * a;
}

int main() {
    int test1 = 2;
    int test2 = -3;
    int test3 = 0;
    int test4 = 10;

    printf("Test 1 - Expected : 4, Output : %d\n", square(test1));
    printf("Test 2 - Expected : 9, Output : %d\n", square(test2));
    printf("Test 3 - Expected : 0, Output : %d\n", square(test3));
    printf("Test 4 - Expected : 100, Output : %d\n", square(test4));

    return 0;
}