// Desenvolva uma função recursiva de soma. Esta função deve ir de número em número somando-os até chegar a um resultado.(2,0)
#include <stdio.h>

int soma(int numero)
{  
    if (numero > 0 )
    {   
        int somaa = numero + soma(numero-1);
        return somaa;
    }
}

int main()
{
    int numero = 0;
    printf("\nDigite o numero que deseja somar:");
    scanf("%d", &numero);
    printf("A soma e: %d", soma(numero));
}