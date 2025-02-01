#include <stdio.h>

void test_control_flow(int num) {
    if (num > 0) {
        printf("Number is positive.\n");
    } else if (num < 0) {
        printf("Number is negative.\n");
    } else {
        printf("Number is zero.\n");
    }
}

int main() {
    test_control_flow(10); // Test positive number
    test_control_flow(-5); // Test negative number
    test_control_flow(0);  // Test zero

    return 0;
}