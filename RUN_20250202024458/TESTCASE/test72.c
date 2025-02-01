#include <stdio.h>
#include <string.h>
#include <assert.h>

void count_chars(const char* str, int* vowels, int* consonants, int* spaces) {
    int i;
    *vowels = 0;
    *consonants = 0;
    *spaces = 0;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            (*spaces)++;
        else if (str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
    }
}

int main() {
    int vowels, consonants, spaces;

    count_chars("hello world", &vowels, &consonants, &spaces);
    assert(vowels == 3);
    assert(consonants == 7);
    assert(spaces == 1);

    count_chars("this is a test", &vowels, &consonants, &spaces);
    assert(vowels == 4);
    assert(consonants == 7);
    assert(spaces == 3);

    count_chars("", &vowels, &consonants, &spaces);
    assert(vowels == 0);
    assert(consonants == 0);
    assert(spaces == 0);

    return 0;
}