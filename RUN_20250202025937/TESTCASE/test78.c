
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_input_output(const char* input, const char* expected_output) {
    // Redirect stdin and stdout
    FILE* input_stream = fmemopen((void*)input, strlen(input), "r");
    FILE* output_stream = tmpfile();
    FILE* original_stdin = stdin;
    FILE* original_stdout = stdout;
    stdin = input_stream;
    stdout = output_stream;

    // Call the main function
    main();

    // Restore stdin and stdout
    stdin = original_stdin;
    fflush(output_stream);
    rewind(output_stream);
    stdout = original_stdout;

    // Capture the output
    char buffer[1024];
    fread(buffer, 1, sizeof(buffer) - 1, output_stream);
    buffer[sizeof(buffer) - 1] = '\0';

    // Check if the output matches the expected output
    if (strcmp(buffer, expected_output) == 0) {
        printf("Test passed.\n");
    } else {
        printf("Test failed.\nExpected:\n%s\nGot:\n%s\n", expected_output, buffer);
    }

    // Clean up
    fclose(input_stream);
    fclose(output_stream);
}

int main() {
    test_input_output("5\n", "Enter a number: You entered: 5\n");
    test_input_output("-10\n", "Enter a number: You entered: -10\n");
    test_input_output("0\n", "Enter a number: You entered: 0\n");
    return 0;
}
