#include <stdio.h>

#define PI 3.14159

void test_area_of_circle() {
    float radius = 5.0;
    float expected_area = PI * radius * radius;
    float actual_area;

    actual_area = PI * radius * radius;

    if(expected_area == actual_area) {
        printf("Test Passed!\n");
    } else {
        printf("Test Failed!\n");
    }
}

int main() {
    test_area_of_circle();

    return 0;
}