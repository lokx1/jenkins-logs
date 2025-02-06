#include <stdio.h>
#include "p45.c"

int main() {
    Singleton *singleton1 = getSingletonInstance();
    Singleton *singleton2 = getSingletonInstance();

    printf("Address of singleton1: %p\n", (void*)singleton1);
    printf("Address of singleton2: %p\n", (void*)singleton2);

    // Test if the two instances are equal
    if (singleton1 == singleton2) {
        printf("The two singletons are equal.\n");
    } else {
        printf("The two singletons are not equal.\n");
    }

    return 0;
}