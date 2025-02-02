
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
            char lower = str[i] | 0x20; // Convert to lowercase
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
```

### Test Case 1
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Hello World";
    int vowels = 0, consonants = 0, spaces = 0;
    int i;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            spaces++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            char lower = str[i] | 0x20;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels); // Expected: 3
    printf("Consonants: %d\n", consonants); // Expected: 7
    printf("Spaces: %d\n", spaces); // Expected: 1

    return 0;
}
```

### Test Case 2
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "A quick brown fox jumps over the lazy dog";
    int vowels = 0, consonants = 0, spaces = 0;
    int i;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            spaces++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            char lower = str[i] | 0x20;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels); // Expected: 11
    printf("Consonants: %d\n", consonants); // Expected: 24
    printf("Spaces: %d\n", spaces); // Expected: 8

    return 0;
}
```

### Test Case 3
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "123 456 789";
    int vowels = 0, consonants = 0, spaces = 0;
    int i;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            spaces++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            char lower = str[i] | 0x20;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels); // Expected: 0
    printf("Consonants: %d\n", consonants); // Expected: 0
    printf("Spaces: %d\n", spaces); // Expected: 2

    return 0;
}
```

### Test Case 4
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "AEIOUaeiou";
    int vowels = 0, consonants = 0, spaces = 0;
    int i;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            spaces++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            char lower = str[i] | 0x20;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels); // Expected: 10
    printf("Consonants: %d\n", consonants); // Expected: 0
    printf("Spaces: %d\n", spaces); // Expected: 0

    return 0;
}
```

### Test Case 5
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "BCDFG bcdfg";
    int vowels = 0, consonants = 0, spaces = 0;
    int i;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            spaces++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            char lower = str[i] | 0x20;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels); // Expected: 0
    printf("Consonants: %d\n", consonants); // Expected: 10
    printf("Spaces: %d\n", spaces); // Expected: 1

    return 0;
}
