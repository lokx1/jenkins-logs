#include <stdio.h>
#include <math.h>
#include <assert.h>

void test_sqrt() {
    double num = 4.0;
    assert(sqrt(num) == 2.0);
    
    num = 9.0;
    assert(sqrt(num) == 3.0);

    num = 0.0;
    assert(sqrt(num) == 0.0);

    num = 1.0;
    assert(sqrt(num) == 1.0);

    num = 16.0;
    assert(sqrt(num) == 4.0);
}

int main() {
    test_sqrt();

    printf("All test cases passed\n");

    return 0;
}