#include <stdio.h>
#include <regex.h>

// Test case 1: Valid email address
void test_valid_email() {
    char *pattern = "^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$";
    char *string = "example@example.com";
    regex_t regex;
    int ret;

    ret = regcomp(&regex, pattern, REG_EXTENDED);
    if (ret != 0) {
        printf("Failed to compile regular expression.\n");
        return;
    }

    ret = regexec(&regex, string, 0, NULL, 0);
    if (ret == 0)
        printf("Test case 1 passed.\n");
    else
        printf("Test case 1 failed.\n");

    regfree(&regex);
}

// Test case 2: Invalid email address
void test_invalid_email() {
    char *pattern = "^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$";
    char *string = "example@.com";
    regex_t regex;
    int ret;

    ret = regcomp(&regex, pattern, REG_EXTENDED);
    if (ret != 0) {
        printf("Failed to compile regular expression.\n");
        return;
    }

    ret = regexec(&regex, string, 0, NULL, 0);
    if (ret != 0)
        printf("Test case 2 passed.\n");
    else
        printf("Test case 2 failed.\n");

    regfree(&regex);
}

int main() {
    test_valid_email();
    test_invalid_email();

    return 0;
}