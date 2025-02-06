#include <stdio.h>
#include <string.h>
#include "p56.c" // Include the original file as the first line after system includes

int main() {
    char str[100] = "Hello World!"; // Test string
    int vowels, consonants, spaces; // Variables to store counts of vowels, consonants, and spaces

    printf("Testing with string: %s\n", str); // Print the test string for reference

    // Call the function to count the vowels, consonants, and spaces in the string
    vowels = count_vowels(str);
    consonants = count_consonants(str);
    spaces = count_spaces(str);

    printf("Vowels: %d\n", vowels); // Print the number of vowels in the string
    printf("Consonants: %d\n", consonants); // Print the number of consonants in the string
    printf("Spaces: %d\n", spaces); // Print the number of spaces in the string

    return 0;
}