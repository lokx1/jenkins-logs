#include <stdio.h>
#include <assert.h>

void test_bitwise_operations() {
    unsigned int num1 = 10;
    unsigned int num2 = 6;

    assert((num1 & num2) == 2);
    assert((num1 | num2) == 14);
    assert((num1 ^ num2) == 12);
    assert(~num1 == 4294967285);
    assert((num1 << 2) == 40);
    assert((num1 >> 2) == 2);
}

int main() {
    test_bitwise_operations();
    printf("All test cases pass\n");

    return 0;
}