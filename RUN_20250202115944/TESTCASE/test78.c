
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}
```

```c
#include <stdio.h>

void test_input_output(int input, int expected_output) {
    int num = input;
    printf("Test Case - Input: %d\n", num);
    printf("Expected Output: %d\n", expected_output);
    printf("Actual Output: ");
    printf("You entered: %d\n", num);
    if (num == expected_output) {
        printf("Test Passed\n");
    } else {
        printf("Test Failed\n");
    }
}

int main() {
    test_input_output(10, 10);
    test_input_output(0, 0);
    test_input_output(-5, -5);
    test_input_output(123456, 123456);
    test_input_output(-123456, -123456);
    return 0;
}
