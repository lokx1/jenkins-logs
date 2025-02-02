
#include <stdio.h>
#include <math.h>

void test_sqrt(double num, double expected) {
    double result = sqrt(num);
    if (fabs(result - expected) < 1e-9) {
        printf("Test passed for input %lf: %lf\n", num, result);
    } else {
        printf("Test failed for input %lf: expected %lf, got %lf\n", num, expected, result);
    }
}

int main() {
    test_sqrt(4.0, 2.0);
    test_sqrt(9.0, 3.0);
    test_sqrt(0.0, 0.0);
    test_sqrt(1.0, 1.0);
    test_sqrt(16.0, 4.0);
    test_sqrt(25.0, 5.0);
    test_sqrt(2.0, sqrt(2.0));
    test_sqrt(0.25, 0.5);
    test_sqrt(100.0, 10.0);
    test_sqrt(0.01, 0.1);

    return 0;
}
