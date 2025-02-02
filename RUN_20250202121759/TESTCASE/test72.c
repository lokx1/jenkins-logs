
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
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            char lower = str[i] | 32; // Convert to lowercase
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
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
