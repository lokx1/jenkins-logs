
#include "stdio.h"

int is_odd(int a) {
    return a % 2 != 0;
}

int main() {
    int test1 = 1;
    int test2 = 2;
    int test3 = 0;
    int test4 = -1;
    int test5 = -2;
    
    printf("Test 1: %d is odd? %d\n", test1, is_odd(test1));
    printf("Test 2: %d is odd? %d\n", test2, is_odd(test2));
    printf("Test 3: %d is odd? %d\n", test3, is_odd(test3));
    printf("Test 4: %d is odd? %d\n", test4, is_odd(test4));
    printf("Test 5: %d is odd? %d\n", test5, is_odd(test5));
    
    return 0;
}
