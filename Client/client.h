#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
	
#define PORT	 8080
#define MAXLINE 1024

int socket(int domain, int type, int protocol);
//Creates an unbound socket in the specified domain.
//Returns socket file descriptor.

ssize_t sendto(int sockfd, const void *buf, size_t len, int flags,
               const struct sockaddr *dest_addr, socklen_t addrlen);
//Send a message on the socket

ssize_t recvfrom(int sockfd, void *buf, size_t len, int flags,
                 struct sockaddr *src_addr, socklen_t *addrlen);
//Receive a message from the socket.

int close(int fd);
//Close a file descriptor


