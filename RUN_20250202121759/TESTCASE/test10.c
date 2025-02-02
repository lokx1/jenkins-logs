
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result1 = add(5, 3);
    printf("Test 1 - add(5, 3): Expected: 8, Got: %d\n", result1);

    int result2 = add(0, 0);
    printf("Test 2 - add(0, 0): Expected: 0, Got: %d\n", result2);

    int result3 = add(-5, 5);
    printf("Test 3 - add(-5, 5): Expected: 0, Got: %d\n", result3);

    int result4 = add(100, 200);
    printf("Test 4 - add(100, 200): Expected: 300, Got: %d\n", result4);

    int result5 = add(-10, -20);
    printf("Test 5 - add(-10, -20): Expected: -30, Got: %d\n", result5);

    return 0;
}
