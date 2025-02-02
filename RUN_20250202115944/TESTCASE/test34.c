
#include <stdio.h>
#include <regex.h>

void test_regex_match(const char *pattern, const char *string, int expected) {
    regex_t regex;
    int ret;

    ret = regcomp(&regex, pattern, REG_EXTENDED);
    if (ret != 0) {
        printf("Failed to compile regular expression.\n");
        return;
    }

    ret = regexec(&regex, string, 0, NULL, 0);
    if ((ret == 0 && expected == 1) || (ret != 0 && expected == 0))
        printf("Test passed for string: '%s'\n", string);
    else
        printf("Test failed for string: '%s'\n", string);

    regfree(&regex);
}

int main() {
    char *pattern = "^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$";

    test_regex_match(pattern, "example@example.com", 1);
    test_regex_match(pattern, "user@domain.co", 1);
    test_regex_match(pattern, "user@domain", 0);
    test_regex_match(pattern, "user@domain.c", 0);
    test_regex_match(pattern, "user@domain.com123", 0);
    test_regex_match(pattern, "user@domain..com", 0);
    test_regex_match(pattern, "user@.domain.com", 0);
    test_regex_match(pattern, "@domain.com", 0);
    test_regex_match(pattern, "user@domain.com.", 0);
    test_regex_match(pattern, "user@domain.corporate", 1);

    return 0;
}
