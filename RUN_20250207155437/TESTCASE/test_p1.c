#include <stdio.h>
#include "p1.c"

int main() {
    int result = printf("Hello, world!\n");
    if (result != 0) {
        printf("The output was not empty.\n");
    } else {
        printf("The output was empty.\n");
    }
    return 0;
}