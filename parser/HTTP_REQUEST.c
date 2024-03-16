#include "HTTP_REQUEST.h"
#include <string.h>

struct HTTP_REQ request_construtor(char *req)
{
    for (int i = 0; i < strlen(req) - 1; i++)
    {
        if (req[i] == '\n' && req[i + 1] == '\n')
        {
            req[i + 1] = '+';
        }
    }
    char *request_line = strtok(req, "\n");
    char *header_lines = strtok(NULL, "|");
    char *body = strtok(NULL, "|");
}

/*
POST /cgi-bin/process.cgi HTTP/1.1
User-Agent: Mozilla/4.0 (compatible; MSIE5.01; Windows NT)
Host: www.tutorialspoint.com
Content-Type: application/x-www-form-urlencoded
Content-Length: length
Accept-Language: en-us
Accept-Encoding: gzip, deflate
Connection: Keep-Alive

licenseID=string&content=string&/paramsXML=string

*/