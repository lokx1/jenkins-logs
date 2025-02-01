#include <assert.h>

void test_add() {
    assert(add(5, 3) == 8);
    assert(add(0, 0) == 0);
    assert(add(-5, -3) == -8);
    assert(add(100, 200) == 300);
    assert(add(-50, 50) == 0);
}

int main() {
    test_add();
    printf("All tests passed successfully.\n");

    return 0;
}