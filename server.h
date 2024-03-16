#ifndef SERVER_H
#define SERVER_H

#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

struct Server
{
    int domain;
    int service;
    int protocol;
    unsigned long interface;
    int port;
    int backlog;
    int socket;
    struct sockaddr_in address;
    void (*launch)(struct Server *, int);
};

struct Server server_constructor(int family, int service, int protocol, unsigned long interface, int port, int backlog, struct sockaddr_in address, void (*launch)(struct Server *, int));

#endif