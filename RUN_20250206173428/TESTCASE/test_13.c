#include "p38.c"
#include <stdio.h>
#include <sys/socket.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    assert(sockfd != -1); 
    int i = INT_MAX;
    assert(i == INT_MAX);
    assert(i == INT_MIN);
    float f = FLT_MAX;
    assert(f == FLT_MAX);
    assert(f == FLT_MIN);
    int sockfd2 = socket(AF_INET, SOCK_STREAM, 100);
    assert(sockfd2 == -1); 
    return 0;
}