
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

    // Test case 1: Check if both instances point to the same address
    if (singleton1 == singleton2) {
        printf("Test case 1 passed: Both instances are the same.\n");
    } else {
        printf("Test case 1 failed: Instances are different.\n");
    }

    // Test case 2: Modify data and check persistence
    singleton1->data = 42;
    if (singleton2->data == 42) {
        printf("Test case 2 passed: Data is shared between instances.\n");
    } else {
        printf("Test case 2 failed: Data is not shared between instances.\n");
    }

    return 0;
}
