
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

    // Test if both pointers point to the same instance
    if (singleton1 == singleton2) {
        printf("Both singleton1 and singleton2 point to the same instance.\n");
    } else {
        printf("singleton1 and singleton2 do not point to the same instance.\n");
    }

    // Test modifying the singleton instance
    singleton1->data = 42;
    printf("singleton1->data: %d\n", singleton1->data);
    printf("singleton2->data: %d\n", singleton2->data);

    return 0;
}
