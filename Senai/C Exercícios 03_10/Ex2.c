
//2 - Faça um programa que contenha um array de 10 posições. 
//O usuário poderá selecionar duas posições para fazer algum dos cálculos básicos (soma, subtração, divisão, multiplicação) .
#include "functions.h"

int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num_um, num_dois, posicao, op; 

    for (int i = 0; i < 10; i++)
    {
        printf(" %i - %i |", (i+1), array[i]);
    }
    
    printf("\nSelecione o primeiro numero: ");
    scanf("%i", &posicao);
    num_um = array[posicao-1];

    printf("Selecione o segundo numero: ");
    scanf("%i", &posicao);
    num_dois = array[posicao-1];

    printf("1-Soma    2-Subtracao    3-Multiplicacao    4-Divisao\n>");
    scanf("%i", &op);
    
    switch (op)
    {
    case 1:
        soma(num_um, num_dois);
        break;
    case 2:
        subtracao(num_um, num_dois);
        break;
    case 3:
        multiplicacao(num_um, num_dois);
        break;
    case 4:
        divisao(num_um, num_dois);
        break;
    default:
        printf("Divisao nao encontrada.");
        break;
    }

}