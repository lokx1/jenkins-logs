#include <stdio.h>
#include <sys/socket.h>
#include <assert.h>

void test_socket_creation() {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    assert(sockfd != -1);
    printf("Test passed: Socket created successfully\n");
}

int main() {
    test_socket_creation();
    return 0;
}