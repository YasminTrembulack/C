#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int tipo[10];
}Tipo;


typedef struct
{
    int numero;
    char nome[10];
    Tipo marca;
}Produto;


int main()
{

    Produto AAA;
    
    char nome[10] = nome;
    strcpy(AAA.marca.tipo, nome);


   int qnt = 5;

   int * pointer = malloc(qnt, sizeof(int));

   qnt = 7;

   pointer = realloc(pointer, qnt *sizeof(int));





}