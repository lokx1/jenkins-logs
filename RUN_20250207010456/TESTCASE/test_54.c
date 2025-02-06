#include <stdio.h>
#include "p14.c"

int main() {
    float radius = 5.0;
    float area;

    area = PI * radius * radius;

    printf("Area of circle: %f\n", area);

    return 0;
}