
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result1 = add(5, 3);
    printf("Result of add(5, 3): %d\n", result1);

    int result2 = add(0, 0);
    printf("Result of add(0, 0): %d\n", result2);

    int result3 = add(-5, 5);
    printf("Result of add(-5, 5): %d\n", result3);

    int result4 = add(123456, 654321);
    printf("Result of add(123456, 654321): %d\n", result4);

    int result5 = add(-100, -200);
    printf("Result of add(-100, -200): %d\n", result5);

    return 0;
}
