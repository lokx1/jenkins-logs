
#include <stdio.h>

void test_pointer_functionality() {
    int var = 20;
    int *ptr;

    ptr = &var;

    printf("Test 1 - Initial values\n");
    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", (void *)&var);
    printf("Value pointed by pointer: %d\n", *ptr);

    // Modify the value using the pointer
    *ptr = 30;
    printf("\nTest 2 - After modifying value using pointer\n");
    printf("Value of var: %d\n", var);
    printf("Value pointed by pointer: %d\n", *ptr);

    // Change the pointer to point to a different variable
    int another_var = 40;
    ptr = &another_var;
    printf("\nTest 3 - After pointing to a different variable\n");
    printf("Value of another_var: %d\n", another_var);
    printf("Address of another_var: %p\n", (void *)&another_var);
    printf("Value pointed by pointer: %d\n", *ptr);
}

int main() {
    test_pointer_functionality();
    return 0;
}
