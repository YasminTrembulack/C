//Faça a soma de todos os valores de um array.

#include<stdio.h>
int sum(int *ptr)
{

    int soma = 0;
    for (int i = 0; i < 6; i++)
    {
        soma = soma + (*ptr + i);
    }
    return soma;


}


int main()
{
    int numbers[5] = {5, 10, 2, 4, 1};
    int *ptr = numbers;

    printf("%i", sum(*ptr));

}