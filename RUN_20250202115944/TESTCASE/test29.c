
#include <stdio.h>
#include <math.h>

int main() {
    double num1 = 4.0;
    double num2 = 16.0;
    double num3 = 0.0;
    double num4 = -4.0;
    double num5 = 2.25;

    printf("Square root of %lf: %lf\n", num1, sqrt(num1));
    printf("Square root of %lf: %lf\n", num2, sqrt(num2));
    printf("Square root of %lf: %lf\n", num3, sqrt(num3));
    printf("Square root of %lf: %lf\n", num4, sqrt(num4)); // Note: sqrt of negative number
    printf("Square root of %lf: %lf\n", num5, sqrt(num5));

    return 0;
}
