
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, spaces = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);

    return 0;
}
```

```c
#include <stdio.h>
#include <string.h>

void test_case(const char *input, int expected_vowels, int expected_consonants, int expected_spaces) {
    char str[100];
    int vowels = 0, consonants = 0, spaces = 0;
    int i;

    strncpy(str, input, sizeof(str) - 1);
    str[sizeof(str) - 1] = '\0';

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Input: \"%s\"\n", input);
    printf("Expected Vowels: %d, Actual Vowels: %d\n", expected_vowels, vowels);
    printf("Expected Consonants: %d, Actual Consonants: %d\n", expected_consonants, consonants);
    printf("Expected Spaces: %d, Actual Spaces: %d\n", expected_spaces, spaces);
    printf("Test %s\n\n", (vowels == expected_vowels && consonants == expected_consonants && spaces == expected_spaces) ? "PASSED" : "FAILED");
}

int main() {
    test_case("hello world", 3, 7, 1);
    test_case("a e i o u", 5, 0, 4);
    test_case("bcdfg", 0, 5, 0);
    test_case("the quick brown fox", 5, 12, 3);
    test_case(" ", 0, 0, 1);

    return 0;
}
