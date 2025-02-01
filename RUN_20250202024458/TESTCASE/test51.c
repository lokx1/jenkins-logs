#include <assert.h>

void test_swap() {
    int a = 5, b = 10;
    swap(&a, &b);
    assert(a == 10);
    assert(b == 5);

    a = -5, b = 0;
    swap(&a, &b);
    assert(a == 0);
    assert(b == -5);

    a = 100, b = 100;
    swap(&a, &b);
    assert(a == 100);
    assert(b == 100);
}

int main() {
    test_swap();
    return 0;
}