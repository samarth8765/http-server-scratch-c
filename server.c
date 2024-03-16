#include "server.h"

struct Server server_constructor(int __domain, int __service, int __protocol, unsigned long __interface, int __port, int __backlog, struct sockaddr_in __address, void (*launch)(struct Server *, int))
{
    struct Server server;

    server.domain = __domain;
    server.service = __service;
    server.protocol = __protocol;
    server.interface = __interface;
    server.port = __port;
    server.backlog = __backlog;

    server.address.sin_family = server.domain;
    server.address.sin_addr.s_addr = htonl(server.interface);
    server.address.sin_port = htons(server.port);

    server.socket = socket(server.domain, server.service, server.protocol);

    if (server.socket < 0)
    {
        perror("Failed to connect to socket");
        exit(EXIT_FAILURE);
    }

    int bindResult = bind(server.socket, (struct sockaddr *)&server.address, sizeof(server.address));

    if (bindResult < 0)
    {
        perror("Failed to bind with socket");
        exit(EXIT_FAILURE);
    }

    int listenResult = listen(server.socket, server.backlog);
    if (listenResult < 0)
    {
        perror("Failed to listen");
        exit(EXIT_FAILURE);
    }

    server.launch = launch;
    return server;
}