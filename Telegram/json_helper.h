#ifndef JSON_HELPER_
#define JSON_HELPER_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct telegram_chat{
    char id[15];
    char text[256];
};

void get_telegram_chat(struct telegram_chat *chat, char *json);

#endif