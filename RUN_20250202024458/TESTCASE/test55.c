#include <stdio.h>
#include <assert.h>

void greet() {
    printf("Hello!\n");
}

void test_greet() {
    printf("Testing function greet...\n");
    greet();
}

void test_function_pointer() {
    printf("Testing function pointer...\n");
    void (*ptr)() = &greet;
    assert(ptr != NULL);
    (*ptr)();
}

int main() {
    test_greet();
    test_function_pointer();
    return 0;
}