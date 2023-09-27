//  Faça uma função que inverta uma string.

#include <stdio.h>
#include <string.h>
void inverter(char *ptr)
{
    for (int i = 6; i > -1; i--)
    {
        printf("%c", *(ptr + i));
    }
}


int main()
{
    char palavra[7] = "MORANGO";
    char *ptr = palavra;

    inverter(ptr);
}