#include "p38.c"
#include <stdio.h>
#include <sys/socket.h>
#include <assert.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    assert(sockfd != -1);
    int sockfd2 = socket(-1, SOCK_STREAM, 0);
    assert(sockfd2 == -1);
    int sockfd3 = socket(AF_INET, -1, 0);
    assert(sockfd3 == -1);
    int sockfd4 = socket(AF_INET, SOCK_STREAM, -1);
    assert(sockfd4 == -1);
    int maxInt = INT_MAX;
    float minFloat = FLT_MIN;
    int sockfd5 = socket(AF_INET, SOCK_STREAM, maxInt);
    assert(sockfd5 == -1);
    float sockfd6 = socket(AF_INET, SOCK_STREAM, minFloat);
    assert(sockfd6 == -1);
    float eps = 0.00001;
    int sockfd7 = socket(AF_INET, SOCK_STREAM, 0.5 + eps);
    assert(sockfd7 == -1);
    return 0;
}