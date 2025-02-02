
#include <stdio.h>

void test_main_function() {
    // Redirect stdout to a buffer
    char buffer[50];
    FILE* stream = fmemopen(buffer, sizeof(buffer), "w");
    if (stream == NULL) return;

    // Save the original stdout
    FILE* original_stdout = stdout;
    stdout = stream;

    // Call the main function
    int result = main();

    // Flush and close the stream
    fflush(stream);
    fclose(stream);

    // Restore the original stdout
    stdout = original_stdout;

    // Check the output
    if (result == 0 && strcmp(buffer, "Sum: 5050\n") == 0) {
        printf("Test passed.\n");
    } else {
        printf("Test failed. Output was: %s\n", buffer);
    }
}

int main() {
    test_main_function();
    return 0;
}
