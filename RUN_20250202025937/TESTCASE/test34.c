
#include <stdio.h>
#include <regex.h>

void test_regex(const char *pattern, const char *string) {
    regex_t regex;
    int ret;

    ret = regcomp(&regex, pattern, REG_EXTENDED);
    if (ret != 0) {
        printf("Failed to compile regular expression.\n");
        return;
    }

    ret = regexec(&regex, string, 0, NULL, 0);
    if (ret == 0)
        printf("String '%s' matches the pattern.\n", string);
    else
        printf("String '%s' does not match the pattern.\n", string);

    regfree(&regex);
}

int main() {
    char *pattern = "^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$";

    test_regex(pattern, "example@example.com"); // Should match
    test_regex(pattern, "invalid-email"); // Should not match
    test_regex(pattern, "user@domain.co.uk"); // Should match
    test_regex(pattern, "user@domain"); // Should not match
    test_regex(pattern, "user@domain.c"); // Should not match
    test_regex(pattern, "user@domain.com"); // Should match
    test_regex(pattern, "user.name+tag+sorting@example.com"); // Should match
    test_regex(pattern, "user@sub.domain.com"); // Should match

    return 0;
}
