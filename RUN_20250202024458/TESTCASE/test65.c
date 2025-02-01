#include <stdio.h>
#include <assert.h>

void test_program53() {
    FILE *input;
    FILE *output;
    char buf[100];

    /* Test case 1: Check positive number */
    input = fopen("test_input.txt", "w");
    fprintf(input, "5");
    fclose(input);

    output = popen("program53 < test_input.txt", "r");
    fgets(buf, 100, output);
    assert(strcmp(buf, "The number is positive.\n") == 0);
    pclose(output);

    /* Test case 2: Check negative number */
    input = fopen("test_input.txt", "w");
    fprintf(input, "-7");
    fclose(input);

    output = popen("program53 < test_input.txt", "r");
    fgets(buf, 100, output);
    assert(strcmp(buf, "The number is negative.\n") == 0);
    pclose(output);

    /* Test case 3: Check zero */
    input = fopen("test_input.txt", "w");
    fprintf(input, "0");
    fclose(input);

    output = popen("program53 < test_input.txt", "r");
    fgets(buf, 100, output);
    assert(strcmp(buf, "The number is zero.\n") == 0);
    pclose(output);
}

int main() {
    test_program53();
    return 0;
}