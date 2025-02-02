
#include "stdio.h"

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    printf("Test Case 1: max(3, 5) = %d\n", max(3, 5)); // Expected: 5
    printf("Test Case 2: max(10, 10) = %d\n", max(10, 10)); // Expected: 10
    printf("Test Case 3: max(-1, -5) = %d\n", max(-1, -5)); // Expected: -1
    printf("Test Case 4: max(0, 0) = %d\n", max(0, 0)); // Expected: 0
    printf("Test Case 5: max(100, 50) = %d\n", max(100, 50)); // Expected: 100
    printf("Test Case 6: max(-10, 10) = %d\n", max(-10, 10)); // Expected: 10
    return 0;
}
