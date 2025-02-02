
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

```c
// Test case 1: Default behavior without any additional preprocessor directives
#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main() {
    printf("Value of PI: %f\n", PI); // Expected Output: 3.141590
    printf("Square of 5: %d\n", SQUARE(5)); // Expected Output: 25

#ifdef DEBUG
    printf("Debugging information\n");
#endif

#ifndef TEST
    printf("Not in test mode\n"); // Expected Output: Not in test mode
#endif

    return 0;
}
```

```c
// Test case 2: Define DEBUG to test conditional compilation
#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define DEBUG

int main() {
    printf("Value of PI: %f\n", PI); // Expected Output: 3.141590
    printf("Square of 5: %d\n", SQUARE(5)); // Expected Output: 25

#ifdef DEBUG
    printf("Debugging information\n"); // Expected Output: Debugging information
#endif

#ifndef TEST
    printf("Not in test mode\n"); // Expected Output: Not in test mode
#endif

    return 0;
}
```

```c
// Test case 3: Define TEST to test conditional compilation
#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define TEST

int main() {
    printf("Value of PI: %f\n", PI); // Expected Output: 3.141590
    printf("Square of 5: %d\n", SQUARE(5)); // Expected Output: 25

#ifdef DEBUG
    printf("Debugging information\n");
#endif

#ifndef TEST
    printf("Not in test mode\n");
#endif

    return 0;
}
```

```c
// Test case 4: Define both DEBUG and TEST to test conditional compilation
#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define DEBUG
#define TEST

int main() {
    printf("Value of PI: %f\n", PI); // Expected Output: 3.141590
    printf("Square of 5: %d\n", SQUARE(5)); // Expected Output: 25

#ifdef DEBUG
    printf("Debugging information\n"); // Expected Output: Debugging information
#endif

#ifndef TEST
    // No output expected here because TEST is defined
#endif

    return 0;
}
