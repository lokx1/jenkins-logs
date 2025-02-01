Test Case 1: No arguments passed
```C
int main() {
    char *argv[] = { "program" };
    printf("Number of command line arguments: %d\n", 1);
    printf("Command line arguments:\n");
    for (int i = 0; i < 1; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}
```

Test Case 2: One argument passed
```C
int main() {
    char *argv[] = { "program", "arg1" };
    printf("Number of command line arguments: %d\n", 2);
    printf("Command line arguments:\n");
    for (int i = 0; i < 2; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}
```

Test Case 3: Multiple arguments passed
```C
int main() {
    char *argv[] = { "program", "arg1", "arg2", "arg3" };
    printf("Number of command line arguments: %d\n", 4);
    printf("Command line arguments:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}
