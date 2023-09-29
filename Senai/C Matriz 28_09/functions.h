#include<stdio.h>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H


void mostrarMatrix(char *ptr)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c", *(ptr + i * 3 + j));
            printf("\t");
        }
        printf("\n");
    }
}

#endif

