#include <stdio.h>
#include "p45.c" // Include the original file as the first line after system includes

int main() {
    Singleton *singleton1 = getSingletonInstance();
    Singleton *singleton2 = getSingletonInstance();

    printf("Address of singleton1: %p\n", (void*)singleton1);
    printf("Address of singleton2: %p\n", (void*)singleton2);

    return 0;
}