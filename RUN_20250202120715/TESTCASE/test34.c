
#include <stdio.h>
#include <regex.h>

void test_regex_match(const char *pattern, const char *string) {
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
        printf("String \"%s\" matches the pattern \"%s\".\n", string, pattern);
    else
        printf("String \"%s\" does not match the pattern \"%s\".\n", string, pattern);

    // Free compiled regular expression
    regfree(&regex);
}

int main() {
    char *pattern = "^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$";

    // Test cases
    test_regex_match(pattern, "example@example.com");
    test_regex_match(pattern, "user@domain.co.uk");
    test_regex_match(pattern, "user.name+tag+sorting@example.com");
    test_regex_match(pattern, "user@.invalid.com");
    test_regex_match(pattern, "plainaddress");
    test_regex_match(pattern, "@missingusername.com");
    test_regex_match(pattern, "username@.com");
    test_regex_match(pattern, "username@com");
    test_regex_match(pattern, "username@domain.c");
    test_regex_match(pattern, "username@domain..com");

    return 0;
}
