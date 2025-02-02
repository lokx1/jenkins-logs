
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result;

    result = add(5, 3);
    printf("Test 1 - add(5, 3): Expected 8, Got %d\n", result);

    result = add(0, 0);
    printf("Test 2 - add(0, 0): Expected 0, Got %d\n", result);

    result = add(-5, 5);
    printf("Test 3 - add(-5, 5): Expected 0, Got %d\n", result);

    result = add(-3, -7);
    printf("Test 4 - add(-3, -7): Expected -10, Got %d\n", result);

    result = add(100, 200);
    printf("Test 5 - add(100, 200): Expected 300, Got %d\n", result);

    result = add(2147483647, 1);
    printf("Test 6 - add(2147483647, 1): Expected overflow, Got %d\n", result);

    return 0;
}
