//Faça a soma de todos os valores de um array.

#include<stdio.h>
void sum(int *ptr, int *soma)
{
    for (int i = 0; i < 5; i++)
    {
        *soma = *soma + *(ptr + i);
    }
}


int main()
{
    int numbers[5] = {5, 10, 2, 4, 1};
    int *ptr = numbers;
    int soma = 0;

    sum(ptr, &soma); // O & é para pegar o endereço.
    printf("O resultado da soma e: %i", soma);
}