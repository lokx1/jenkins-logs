
#include <stdio.h>
#include <regex.h>

void test_email_matching(const char *string) {
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
        printf("String \"%s\" matches the pattern.\n", string);
    else
        printf("String \"%s\" does not match the pattern.\n", string);

    // Free compiled regular expression
    regfree(&regex);
}

int main() {
    // Test cases
    test_email_matching("example@example.com");
    test_email_matching("user@domain.co.uk");
    test_email_matching("invalid-email@domain");
    test_email_matching("another.example@domain.com");
    test_email_matching("wrong@domain,com");
    test_email_matching("yet.another@example.org");

    return 0;
}
