
#include <stdio.h>
#include <stdlib.h>

void test_input_output(int input, const char* expected_output) {
    char command[256];
    snprintf(command, sizeof(command), "echo %d | ./a.out", input);

    FILE* fp = popen(command, "r");
    if (fp == NULL) {
        fprintf(stderr, "Failed to run command\n");
        exit(1);
    }

    char output[256];
    fgets(output, sizeof(output), fp); // Skip "Enter a number: " prompt
    fgets(output, sizeof(output), fp); // Capture "You entered: X" line

    if (strcmp(output, expected_output) != 0) {
        fprintf(stderr, "Test failed for input %d. Expected: %s, Got: %s", input, expected_output, output);
    } else {
        printf("Test passed for input %d.\n", input);
    }

    pclose(fp);
}

int main() {
    test_input_output(5, "You entered: 5\n");
    test_input_output(-10, "You entered: -10\n");
    test_input_output(0, "You entered: 0\n");
    test_input_output(123456, "You entered: 123456\n");
    test_input_output(-98765, "You entered: -98765\n");
    return 0;
}
