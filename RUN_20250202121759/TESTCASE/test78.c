
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
#include <assert.h>

void test_input_output(int input, int expected_output) {
    // Redirect stdin and stdout
    char input_buffer[50];
    char output_buffer[50];
    snprintf(input_buffer, sizeof(input_buffer), "%d\n", input);
    FILE *input_stream = fmemopen(input_buffer, sizeof(input_buffer), "r");
    FILE *output_stream = fmemopen(output_buffer, sizeof(output_buffer), "w");

    // Save the original stdin and stdout
    FILE *original_stdin = stdin;
    FILE *original_stdout = stdout;

    // Redirect stdin and stdout to our buffers
    stdin = input_stream;
    stdout = output_stream;

    // Run the main function
    main();

    // Restore the original stdin and stdout
    stdin = original_stdin;
    stdout = original_stdout;

    // Close the streams
    fclose(input_stream);
    fclose(output_stream);

    // Check the output
    char expected_output_buffer[50];
    snprintf(expected_output_buffer, sizeof(expected_output_buffer), "Enter a number: You entered: %d\n", expected_output);
    assert(strcmp(output_buffer, expected_output_buffer) == 0);
}

int main() {
    test_input_output(5, 5);
    test_input_output(-10, -10);
    test_input_output(0, 0);
    test_input_output(123456, 123456);
    test_input_output(-99999, -99999);
    printf("All test cases passed.\n");
    return 0;
}
