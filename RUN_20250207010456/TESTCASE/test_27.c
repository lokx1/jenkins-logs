#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>
#include "p88.c"

int main() {
    // Test case 1: Simulate real-time tasks with different execution times
    realTimeTask(1, 100);
    realTimeTask(2, 50);
    realTimeTask(3, 150);

    return 0;
}