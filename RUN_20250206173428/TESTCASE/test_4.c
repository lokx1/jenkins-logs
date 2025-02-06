#include "p37.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include <assert.h>
int main(void)
{
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
        return 1;
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include <assert.h>
void test_socket_creation()
{
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    assert(sockfd != -1);
}
void test_socket_creation_failure()
{
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    assert(sockfd == -1);
}
int main(void)
{
    return 0;
}