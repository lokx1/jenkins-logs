#include <stdio.h>
#include <assert.h>

void test_program52() {
    FILE *input, *output;
    int num1, num2, sum, diff, prod, quot, rem;

    /* Redirect stdin and stdout to files */
    input = freopen("input.txt", "r", stdin);
    output = freopen("output.txt", "w", stdout);

    /* Test case 1: */
    fprintf(input, "5 3\n");
    main();
    fprintf(output, "Sum: 8\nDifference: 2\nProduct: 15\nQuotient: 1\nRemainder: 2\n");

    /* Test case 2: */
    fprintf(input, "10 2\n");
    main();
    fprintf(output, "Sum: 12\nDifference: 8\nProduct: 20\nQuotient: 5\nRemainder: 0\n");

    /* Test case 3: */
    fprintf(input, "-7 4\n");
    main();
    fprintf(output, "Sum: -3\nDifference: -11\nProduct: -28\nQuotient: -1\nRemainder: -3\n");

    /* Close files and restore stdin, stdout */
    fclose(input);
    fclose(output);
    stdin = fdopen(0, "r");
    stdout = fdopen(1, "w");
}

int main() {
    /* Run the test cases */
    test_program52();

    return 0;
}