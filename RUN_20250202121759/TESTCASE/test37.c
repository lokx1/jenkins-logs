
#include <stdio.h>

#define PI 3.14159

void test_circle_area(float radius, float expected_area) {
    float area = PI * radius * radius;
    if (area == expected_area) {
        printf("Test passed for radius: %f\n", radius);
    } else {
        printf("Test failed for radius: %f. Expected: %f, Got: %f\n", radius, expected_area, area);
    }
}

int main() {
    test_circle_area(5.0, 78.53975);
    test_circle_area(0.0, 0.0);
    test_circle_area(1.0, 3.14159);
    test_circle_area(2.0, 12.56636);
    test_circle_area(10.0, 314.159);

    return 0;
}
