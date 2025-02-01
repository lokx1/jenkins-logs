#include <stdio.h>
#include <assert.h>

void test_operators() {
    int a = 5, b = 3;

    assert(a + b == 8);
    assert(a - b == 2);
    assert(a * b == 15);
    assert(a / b == 1);

    printf("All operator tests passed.\n");
}

int main() {
    test_operators();
    return 0;
}