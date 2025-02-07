#include <stdio.h>
#include "p58.c"

int main() {
    int x = 5, y = 10;
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}