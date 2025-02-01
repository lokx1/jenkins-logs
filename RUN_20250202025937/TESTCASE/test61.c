
#include <stdio.h>

// Singleton design pattern
typedef struct {
    int data;
} Singleton;

Singleton* getSingletonInstance() {
    static Singleton instance;
    return &instance;
}

int main() {
    Singleton *singleton1 = getSingletonInstance();
    Singleton *singleton2 = getSingletonInstance();

    printf("Address of singleton1: %p\n", (void*)singleton1);
    printf("Address of singleton2: %p\n", (void*)singleton2);

    // Test case 1: Modify the data in the singleton instance and check if it reflects
    singleton1->data = 42;
    printf("Data in singleton1: %d\n", singleton1->data);
    printf("Data in singleton2: %d\n", singleton2->data);

    // Test case 2: Modify the data using singleton2 and check if it reflects in singleton1
    singleton2->data = 100;
    printf("Data in singleton1 after modification through singleton2: %d\n", singleton1->data);
    printf("Data in singleton2 after modification: %d\n", singleton2->data);

    return 0;
}
