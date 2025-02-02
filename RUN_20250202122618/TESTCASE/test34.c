
#include <stdio.h>
#include <regex.h>

void test_email_pattern(const char *string) {
    char *pattern = "^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$";
    regex_t regex;
    int ret;

    // Compile regular expression
    ret = regcomp(&regex, pattern, REG_EXTENDED);
    if (ret != 0) {
        printf("Failed to compile regular expression.\n");
        return;
    }

    // Execute regular expression
    ret = regexec(&regex, string, 0, NULL, 0);
    if (ret == 0)
        printf("String '%s' matches the pattern.\n", string);
    else
        printf("String '%s' does not match the pattern.\n", string);

    // Free compiled regular expression
    regfree(&regex);
}

int main() {
    const char *test_cases[] = {
        "example@example.com",
        "user@domain.co",
        "user.name+tag+sorting@example.com",
        "user@sub.domain.com",
        "invalid-email.com",
        "@missingusername.com",
        "missingatsign.com",
        "user@.com",
        "user@domain.c",
        "user@domain..com"
    };

    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);
    for (int i = 0; i < num_test_cases; i++) {
        test_email_pattern(test_cases[i]);
    }

    return 0;
}
