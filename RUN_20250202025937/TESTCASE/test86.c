
#include "stdio.h"

int add(int a, int b) {
    return a + b;
}

int main() {
    // Test case 1
    int result1 = add(2, 3);
    printf("add(2, 3) = %d\n", result1);

    // Test case 2
    int result2 = add(-1, 5);
    printf("add(-1, 5) = %d\n", result2);

    // Test case 3
    int result3 = add(0, 0);
    printf("add(0, 0) = %d\n", result3);

    // Test case 4
    int result4 = add(100, 200);
    printf("add(100, 200) = %d\n", result4);

    // Test case 5
    int result5 = add(-50, -50);
    printf("add(-50, -50) = %d\n", result5);

    return 0;
}
