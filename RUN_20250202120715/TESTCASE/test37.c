
#include <stdio.h>

#define PI 3.14159

float calculate_circle_area(float radius) {
    return PI * radius * radius;
}

void test_calculate_circle_area() {
    float radius;
    float expected_area;
    float calculated_area;

    // Test case 1
    radius = 5.0;
    expected_area = 78.53975;
    calculated_area = calculate_circle_area(radius);
    printf("Test 1: radius = %f, expected area = %f, calculated area = %f\n", radius, expected_area, calculated_area);

    // Test case 2
    radius = 0.0;
    expected_area = 0.0;
    calculated_area = calculate_circle_area(radius);
    printf("Test 2: radius = %f, expected area = %f, calculated area = %f\n", radius, expected_area, calculated_area);

    // Test case 3
    radius = 1.0;
    expected_area = 3.14159;
    calculated_area = calculate_circle_area(radius);
    printf("Test 3: radius = %f, expected area = %f, calculated area = %f\n", radius, expected_area, calculated_area);

    // Test case 4
    radius = 10.0;
    expected_area = 314.159;
    calculated_area = calculate_circle_area(radius);
    printf("Test 4: radius = %f, expected area = %f, calculated area = %f\n", radius, expected_area, calculated_area);

    // Test case 5
    radius = 2.5;
    expected_area = 19.6349375;
    calculated_area = calculate_circle_area(radius);
    printf("Test 5: radius = %f, expected area = %f, calculated area = %f\n", radius, expected_area, calculated_area);
}

int main() {
    test_calculate_circle_area();
    return 0;
}
