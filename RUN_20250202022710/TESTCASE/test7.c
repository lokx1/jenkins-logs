#include "stdio.h"

int modulus(int a, int b) {
    return a % b;
}

int main() {
    int result1, result2, result3, result4;

    result1 = modulus(10, 3); // Expected output: 1
    result2 = modulus(18, 7); // Expected output: 4
    result3 = modulus(20, 5); // Expected output: 0
    result4 = modulus(15, 4); // Expected output: 3

    printf("Modulus of 10 and 3 is: %d\n", result1);
    printf("Modulus of 18 and 7 is: %d\n", result2);
    printf("Modulus of 20 and 5 is: %d\n", result3);
    printf("Modulus of 15 and 4 is: %d\n", result4);

    return 0;
}