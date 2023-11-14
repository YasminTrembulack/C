// Faça um programa que leia n valores e armazene esses valores em um array[n]. Depois, multiplique todos esses valores.(2,0)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 0, resultado = 1;
    printf("Digite a quantidade de numeros: ");
    scanf("%i", &tamanho);
    
    int *array = malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor: ");
        scanf("%i", &array[i]);
    }
    for (int i = 0; i < tamanho; i++)
    {
        resultado = resultado * array[i];
    }
    printf("%d",resultado);
    free(array);
}