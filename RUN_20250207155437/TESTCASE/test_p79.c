#include "p79.c" // Include the original file as the first line after system includes
#define TEST // Define the TEST macro to enable conditional compilation
int main() {
    printf("Value of PI: %f\n", PI); // Output: 3.141590
    printf("Square of 5: %d\n", SQUARE(5)); // Output: 25
#ifdef DEBUG // If the DEBUG macro is defined, print debugging information
    printf("Debugging information\n");
#endif
#ifndef TEST // If the TEST macro is not defined, print "Not in test mode"
    printf("Not in test mode\n");
#endif
    return 0;
}