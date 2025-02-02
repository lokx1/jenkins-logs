
#include <stdio.h>

void test_data_types() {
    int integerVar = 10;
    float floatVar = 3.14f;
    char charVar = 'A';

    printf("Integer: %d\n", integerVar);
    printf("Float: %.2f\n", floatVar);
    printf("Character: %c\n", charVar);
}

int main() {
    test_data_types();
    return 0;
}
