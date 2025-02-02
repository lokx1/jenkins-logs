
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
```

To create test cases for this code, you can compile and run it under different conditions by defining or not defining the `DEBUG` and `TEST` macros. Here are some examples:

```c
// Test Case 1: Compile and run without any definitions
// Expected Output:
// Value of PI: 3.141590
// Square of 5: 25
// Not in test mode

// Test Case 2: Compile with DEBUG defined
// Add this line at the top of the file:
// #define DEBUG
// Expected Output:
// Value of PI: 3.141590
// Square of 5: 25
// Debugging information
// Not in test mode

// Test Case 3: Compile with TEST defined
// Add this line at the top of the file:
// #define TEST
// Expected Output:
// Value of PI: 3.141590
// Square of 5: 25

// Test Case 4: Compile with both DEBUG and TEST defined
// Add these lines at the top of the file:
// #define DEBUG
// #define TEST
// Expected Output:
// Value of PI: 3.141590
// Square of 5: 25
// Debugging information
