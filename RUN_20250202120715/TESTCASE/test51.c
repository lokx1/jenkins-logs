
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    int a = 0, b = 0;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);

    int p = -5, q = 15;
    printf("Before swapping: p = %d, q = %d\n", p, q);
    swap(&p, &q);
    printf("After swapping: p = %d, q = %d\n", p, q);

    int m = 123, n = 456;
    printf("Before swapping: m = %d, n = %d\n", m, n);
    swap(&m, &n);
    printf("After swapping: m = %d, n = %d\n", m, n);

    return 0;
}
