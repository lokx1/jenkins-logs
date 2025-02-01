Sure, here is the test case for your C code:

```c
#include <assert.h>

int main() {
    struct Stack stack;
    initStack(&stack);

    assert(isEmpty(&stack) == true);

    push(&stack, 10);
    assert(peek(&stack) == 10);

    push(&stack, 20);
    assert(peek(&stack) == 20);

    push(&stack, 30);
    assert(peek(&stack) == 30);

    assert(pop(&stack) == 30);
    assert(pop(&stack) == 20);
    assert(pop(&stack) == 10);

    assert(isEmpty(&stack) == true);

    return 0;
}
```

This test case tests all the functions in your stack implementation. It checks if the stack is initially empty, if the push function adds elements to the top of the stack, if the peek function returns the top element, if the pop function removes and returns the top element, and if the stack is empty after all elements are popped.