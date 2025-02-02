
#include <stdio.h>
#include <math.h>

int main() {
    double num1 = 4.0;
    double num2 = 9.0;
    double num3 = 0.0;
    double num4 = -1.0;

    printf("Square root of %lf: %lf\n", num1, sqrt(num1));
    printf("Square root of %lf: %lf\n", num2, sqrt(num2));
    printf("Square root of %lf: %lf\n", num3, sqrt(num3));
    printf("Square root of %lf: %lf\n", num4, sqrt(num4)); // This will print NaN

    return 0;
}
