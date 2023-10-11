#include<stdio.h>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int soma(int num_um, int num_dois)
{
    printf("O resultado da soma de %i por %i e: %i", num_um, num_dois, (num_um + num_dois));
}

int subtracao(int num_um, int num_dois)
{
    printf("O resultado da subtracao de %i por %i e: %i", num_um, num_dois, (num_um - num_dois));
}

int multiplicacao(int num_um, int num_dois)
{
    printf("O resultado da multiplicacao de %i por %i e: %i", num_um, num_dois, (num_um * num_dois));
}

int divisao(int num_um, int num_dois)
{
    if (num_dois == 0)
    {
        printf("Numeros nao podem ser divididos por 0.");
    }
    else
    {
        printf("O resultado da divisao de %i por %i e: %i", num_um, num_dois, (num_um / num_dois));
    }
}

#endif