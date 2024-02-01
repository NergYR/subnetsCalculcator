#include <stdio.h>
#include "functions.h"
#include "structs.h"
#define size 3
char *ip_send;

void help(){
    printf("Usage: ./main [OPTION] [IP]\n");
    printf("Options:\n");
}

void version(){
    printf("Version: 0.0.01\n");
}



int subnetting_ipv4(ip_send){
    int ip[size];
    ip_parsing(ip_send, ip);

    if (sizeof(ip) != 3) {
        printf("Invalid IP\n");
    }else{
        printf("Subnetting IPv4\n");
    }
}
