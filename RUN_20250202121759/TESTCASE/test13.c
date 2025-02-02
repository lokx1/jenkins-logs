
#include <stdio.h>

int main() {
    // Test case 1: Check the sum from 1 to 100 using loop unrolling
    int sum = 0;
    for (int i = 1; i <= 100; i += 5) {
        sum += i;
        sum += i + 1;
        sum += i + 2;
        sum += i + 3;
        sum += i + 4;
    }
    printf("Sum: %d\n", sum); // Expected output: Sum: 5050

    // Test case 2: Check the sum from 1 to 50 using loop unrolling
    sum = 0;
    for (int i = 1; i <= 50; i += 5) {
        sum += i;
        sum += i + 1;
        sum += i + 2;
        sum += i + 3;
        sum += i + 4;
    }
    printf("Sum for 1 to 50: %d\n", sum); // Expected output: Sum for 1 to 50: 625

    // Test case 3: Check the sum from 1 to 10 using loop unrolling
    sum = 0;
    for (int i = 1; i <= 10; i += 5) {
        sum += i;
        sum += i + 1;
        sum += i + 2;
        sum += i + 3;
        sum += i + 4;
    }
    printf("Sum for 1 to 10: %d\n", sum); // Expected output: Sum for 1 to 10: 55

    return 0;
}
