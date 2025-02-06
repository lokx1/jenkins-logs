Here is a test case for the given C code that adheres to the constraints you specified:
```c
#include <stdio.h>
#include "p46.c"

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    
    printf("Sum of first 10 natural numbers: %d\n", sum);
    
    return 0;
}
```