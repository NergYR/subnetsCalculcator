#include "functions.h"
#include "structs.h"
#include <stdlib.h>


int ip_parsing(char ip_send[], int ip[]){

    char *token = strtok(ip_send, ".");
    int i = 0;
    while (token != NULL)
    {
        ip[i] = atoi(token);
        token = strtok(NULL, ".");
        i++;
    }
    return 0;

}