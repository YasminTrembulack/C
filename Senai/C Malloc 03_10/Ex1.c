//Faça um programa que leia o tamanho de um vetor de inteiros e reserve
//dinamicamente memoria para esse vetor. Em seguida, leia os elementos
//desse vetor, imprima o vetor lido e mostre o resultado da soma dos numeros
//ımpares presentes no vetor
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int tamanho;
    int soma = 0;
   
    printf("Digite a quantidade de numeros: ");
    scanf("%i", &tamanho);
    
    int *array = malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor: ");
        scanf("%i", &array[i]);
    }

    printf("\nNumeros recebidos: \n");
    for (int i = 0; i < tamanho; i++)
    {   
        printf("%i \t", array[i]);

        if (array[i] % 2 != 0)
        {
            soma = soma + array[i];
        }
        
    }
    printf("\nA soma dos numero impares e: %i", soma);
}