
#include <stdio.h>

#define PI 3.14159

float calculate_circle_area(float radius) {
    return PI * radius * radius;
}

int main() {
    // Test case 1: radius = 5.0
    float radius1 = 5.0;
    float area1 = calculate_circle_area(radius1);
    printf("Test case 1 - Radius: %f, Area: %f\n", radius1, area1);

    // Test case 2: radius = 0.0
    float radius2 = 0.0;
    float area2 = calculate_circle_area(radius2);
    printf("Test case 2 - Radius: %f, Area: %f\n", radius2, area2);

    // Test case 3: radius = 10.0
    float radius3 = 10.0;
    float area3 = calculate_circle_area(radius3);
    printf("Test case 3 - Radius: %f, Area: %f\n", radius3, area3);

    // Test case 4: radius = -5.0 (invalid case, testing negative radius)
    float radius4 = -5.0;
    float area4 = calculate_circle_area(radius4);
    printf("Test case 4 - Radius: %f, Area: %f\n", radius4, area4);

    // Test case 5: radius = 2.5
    float radius5 = 2.5;
    float area5 = calculate_circle_area(radius5);
    printf("Test case 5 - Radius: %f, Area: %f\n", radius5, area5);

    return 0;
}
