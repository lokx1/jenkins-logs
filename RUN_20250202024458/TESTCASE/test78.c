#include <stdio.h>
#include <assert.h>

void test_program50() {
    FILE *input;
    FILE *output;
    int num;

    // Redirect stdin and stdout
    input = freopen("test_input.txt", "r", stdin);
    output = freopen("test_output.txt", "w", stdout);

    // Write test case to input file
    input = fopen("test_input.txt", "w");
    fprintf(input, "5\n");
    fclose(input);

    // Run the function
    main();

    // Check the output
    output = fopen("test_output.txt", "r");
    fscanf(output, "Enter a number: You entered: %d\n", &num);
    fclose(output);

    // Assert the output
    assert(num == 5);

    // Redirect stdin and stdout back to console
    stdin = freopen("CON", "r", stdin);
    stdout = freopen("CON", "w", stdout);
}

int main() {
    test_program50();
    return 0;
}