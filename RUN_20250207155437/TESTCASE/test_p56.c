#include <stdio.h>
#include <string.h>
#include "p56.c"

int main() {
    char str[100];
    int vowels, consonants, spaces;

    // Test case 1: Empty string
    printf("Test case 1:\n");
    strcpy(str, "");
    count_vowels_consonants_spaces(str);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);

    // Test case 2: String with only vowels
    printf("\nTest case 2:\n");
    strcpy(str, "aeiou");
    count_vowels_consonants_spaces(str);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);

    // Test case 3: String with only consonants
    printf("\nTest case 3:\n");
    strcpy(str, "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ");
    count_vowels_consonants_spaces(str);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);

    // Test case 4: String with only spaces
    printf("\nTest case 4:\n");
    strcpy(str, "          ");
    count_vowels_consonants_spaces(str);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);

    // Test case 5: String with a mix of vowels, consonants, and spaces
    printf("\nTest case 5:\n");
    strcpy(str, "aeiou bcdfghjklmnpqrstvwxyz BCDFGHJKLMNPQRSTVWXYZ          ");
    count_vowels_consonants_spaces(str);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);

    return 0;
}