
#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main() {
    printf("Value of PI: %f\n", PI); // Output: 3.141590
    printf("Square of 5: %d\n", SQUARE(5)); // Output: 25

#ifdef DEBUG
    printf("Debugging information\n");
#endif

#ifndef TEST
    printf("Not in test mode\n");
#endif

    return 0;
}
