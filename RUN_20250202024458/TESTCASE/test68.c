#include <assert.h>

int main() {
    /* Test case 1: Check the initial values */
    int integerVar = 10;
    float floatVar = 3.14;
    char charVar = 'A';

    assert(integerVar == 10);
    assert(floatVar == 3.14f);
    assert(charVar == 'A');

    /* Test case 2: Change the values and check again */
    integerVar = 20;
    floatVar = 6.28;
    charVar = 'B';

    assert(integerVar == 20);
    assert(floatVar == 6.28f);
    assert(charVar == 'B');

    /* Test case 3: Check the negative values */
    integerVar = -10;
    floatVar = -3.14;
    charVar = 'Z';

    assert(integerVar == -10);
    assert(floatVar == -3.14f);
    assert(charVar == 'Z');

    printf("All test cases passed successfully.\n");

    return 0;
}