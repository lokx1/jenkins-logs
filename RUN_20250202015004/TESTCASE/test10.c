
#include "stdio.h"

int square(int a) {
    return a * a;
}

int main() {
    int test1 = 0;
    int result1 = square(test1);
    printf("square(%d) = %d\n", test1, result1);

    int test2 = 1;
    int result2 = square(test2);
    printf("square(%d) = %d\n", test2, result2);

    int test3 = -1;
    int result3 = square(test3);
    printf("square(%d) = %d\n", test3, result3);

    int test4 = 5;
    int result4 = square(test4);
    printf("square(%d) = %d\n", test4, result4);

    int test5 = -5;
    int result5 = square(test5);
    printf("square(%d) = %d\n", test5, result5);

    int test6 = 10;
    int result6 = square(test6);
    printf("square(%d) = %d\n", test6, result6);

    int test7 = -10;
    int result7 = square(test7);
    printf("square(%d) = %d\n", test7, result7);

    return 0;
}
