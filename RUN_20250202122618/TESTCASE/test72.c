
#include <stdio.h>
#include <string.h>

void test_count_vowels_consonants_spaces(const char *input, int expected_vowels, int expected_consonants, int expected_spaces) {
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

    printf("Test input: \"%s\"\n", input);
    printf("Expected Vowels: %d, Consonants: %d, Spaces: %d\n", expected_vowels, expected_consonants, expected_spaces);
    printf("Actual Vowels: %d, Consonants: %d, Spaces: %d\n", vowels, consonants, spaces);
    printf("Test %s\n\n", (vowels == expected_vowels && consonants == expected_consonants && spaces == expected_spaces) ? "PASSED" : "FAILED");
}

int main() {
    test_count_vowels_consonants_spaces("hello world", 3, 7, 1);
    test_count_vowels_consonants_spaces("a e i o u", 5, 0, 4);
    test_count_vowels_consonants_spaces("abcdefghijklmnopqrstuvwxyz", 5, 21, 0);
    test_count_vowels_consonants_spaces(" ", 0, 0, 1);
    test_count_vowels_consonants_spaces("", 0, 0, 0);
    test_count_vowels_consonants_spaces("the quick brown fox", 5, 13, 3);
    return 0;
}
