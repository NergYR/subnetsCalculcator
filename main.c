#include <string.h>
#include <stdio.h>
#include "libs/functions.h"
#include "libs/structs.h"


int main(int argc, char const *argv[])
{
    if(argc == 1)
    {
        help();
        return 0;
    }
    else if(argc == 2)
    {
        if(strcmp(argv[1], "-h") == 0)
        {
            help();

        }else if (strcmp(argv[1], "-v") == 0){
            version();
        }else if(strcmp(argv[1], "-4") == 0){
            if(argc == 3)
            {
                subnetting_ipv4(argv[2]);
            }else{
                printf("Usage: ./main -4 [IP]\n");
            }
        }
    }
        
    return 0;
}
