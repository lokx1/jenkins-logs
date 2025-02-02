
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result1 = add(5, 3);
    printf("Test Case 1: add(5, 3) = %d\n", result1);

    int result2 = add(-1, 1);
    printf("Test Case 2: add(-1, 1) = %d\n", result2);

    int result3 = add(0, 0);
    printf("Test Case 3: add(0, 0) = %d\n", result3);

    int result4 = add(100, 200);
    printf("Test Case 4: add(100, 200) = %d\n", result4);

    int result5 = add(-50, -50);
    printf("Test Case 5: add(-50, -50) = %d\n", result5);

    return 0;
}
