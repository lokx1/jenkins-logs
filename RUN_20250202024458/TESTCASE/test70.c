#include <stdio.h>
#include <time.h>
#include <assert.h>

void test_time_function() {
    time_t currentTime;

    assert(time(&currentTime) != -1);

    printf("Current time: %s", ctime(&currentTime));
}

int main() {
    test_time_function();

    return 0;
}