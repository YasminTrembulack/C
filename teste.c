#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{    
    FILE *fl = fopen("01.txt", "r");
    char search[100];    
    char line[1000];    
    int done = 0;    
        
    fgets(search, 100, stdin);    
    search[strlen(search) -1] = 0;    
    do
    {        
        fgets(line, 1000, fl);   
        if(strstr(line, search) != NULL)
        {            
            printf("Linha: %s", line);            
            done = 1;        
        }    
    }
    while(!feof(fl));
    if(done == 0)        
    printf("Nao foi encontrada a string");    
    return 0;
}