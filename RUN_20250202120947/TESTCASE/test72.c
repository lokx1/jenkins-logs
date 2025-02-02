
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

Test Case 1:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world";
    int vowels = 0, consonants = 0, spaces = 0;
    int i;

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

    printf("Test Case 1\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);

    return 0;
}
```

Test Case 2:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "a quick brown fox";
    int vowels = 0, consonants = 0, spaces = 0;
    int i;

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

    printf("Test Case 2\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);

    return 0;
}
```

Test Case 3:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "aeiou";
    int vowels = 0, consonants = 0, spaces = 0;
    int i;

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

    printf("Test Case 3\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);

    return 0;
}
```

Test Case 4:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "bcdfghjklmnpqrstvwxyz";
    int vowels = 0, consonants = 0, spaces = 0;
    int i;

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

    printf("Test Case 4\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);

    return 0;
}
```

Test Case 5:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "  ";
    int vowels = 0, consonants = 0, spaces = 0;
    int i;

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

    printf("Test Case 5\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);

    return 0;
}
