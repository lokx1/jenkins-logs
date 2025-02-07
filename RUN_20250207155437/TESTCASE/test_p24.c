#include <stdio.h>
#include <time.h>
#include "p24.c"

int main() {
    time_t currentTime;
    time(&currentTime);
    printf("Current time: %s", ctime(&currentTime));
    return 0;
}