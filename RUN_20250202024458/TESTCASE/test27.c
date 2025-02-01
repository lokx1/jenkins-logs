#include <stdio.h>
#include <assert.h>

int main() {
    int var = 10;
    int *ptr;

    ptr = &var;

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Value pointed by pointer: %d\n", *ptr);

    /* Test case 1: Check if the value of var is 10 */
    assert(var == 10);

    /* Test case 2: Check if the pointer points to the address of var */
    assert(ptr == &var);

    /* Test case 3: Check if the value pointed by the pointer is equal to var */
    assert(*ptr == var);

    return 0;
}