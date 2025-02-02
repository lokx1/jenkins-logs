
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

int main() {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("Socket creation failed");
        return 1;
    }
    printf("Socket created successfully\n");

    // Test case: Check if the socket can be bound to a local address
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(8080);

    if (bind(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        perror("Bind failed");
        close(sockfd);
        return 1;
    }
    printf("Bind successful\n");

    // Test case: Check if the socket can listen for connections
    if (listen(sockfd, 3) < 0) {
        perror("Listen failed");
        close(sockfd);
        return 1;
    }
    printf("Listening on port 8080\n");

    // Test case: Accept a connection (non-blocking for testing purposes)
    struct sockaddr_in client_addr;
    socklen_t client_addr_len = sizeof(client_addr);
    int new_socket = accept(sockfd, (struct sockaddr *)&client_addr, &client_addr_len);
    if (new_socket < 0) {
        perror("Accept failed");
        close(sockfd);
        return 1;
    }
    printf("Connection accepted\n");

    // Close the sockets
    close(new_socket);
    close(sockfd);

    return 0;
}
