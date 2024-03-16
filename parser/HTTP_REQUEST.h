#ifndef HTTP_REQUEST_H
#define HTTP_REQUEST_H

enum HTTP_METHODS
{
    GET,
    POST,
    DELETE,
    PUT,
    PATCH,
    HEAD,
    CONNECT,
    OPTIONS,
    TRACE,
};

struct HTTP_REQ
{
    int method;
    char *uri;
    float HTTP_VERSION;
};

struct HTTP_REQ request_construtor(char *req);

#endif