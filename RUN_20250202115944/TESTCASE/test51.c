
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

    int a = -1, b = 20;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);

    int m = 0, n = 0;
    printf("Before swapping: m = %d, n = %d\n", m, n);
    swap(&m, &n);
    printf("After swapping: m = %d, n = %d\n", m, n);

    int p = 100, q = -100;
    printf("Before swapping: p = %d, q = %d\n", p, q);
    swap(&p, &q);
    printf("After swapping: p = %d, q = %d\n", p, q);

    return 0;
}
