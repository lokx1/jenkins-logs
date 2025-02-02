
#include <stdio.h>

void test_input_output(int input) {
    int num;
    printf("Testing input: %d\n", input);
    num = input;
    printf("Expected output: You entered: %d\n", num);
    printf("Actual output: ");
    printf("You entered: %d\n", num);
    printf("\n");
}

int main() {
    test_input_output(0);
    test_input_output(42);
    test_input_output(-1);
    test_input_output(2147483647);
    test_input_output(-2147483648);
    return 0;
}
