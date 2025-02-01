
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of command line arguments: %d\n", argc);
    printf("Command line arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}
```

To test the above code, you would compile it and run it from the command line, passing different arguments to see the output. For example:

```sh
gcc -o test_program test_program.c
./test_program arg1 arg2 arg3
```

This would output:

```
Number of command line arguments: 4
Command line arguments:
./test_program
arg1
arg2
arg3
