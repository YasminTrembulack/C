//1- Receba valores em cada posição de uma matriz e 
//identifique a posição e o valor que está o maior deles.
#include<stdio.h>
int main()
{
    int numeros[8] = {2 ,7 , 3, 15, 9, 14 ,20, 1};
    int *ptr = numeros;
    int maior = 0;

    for (int i = 0; i < 9; i++)
    {   
        int comparado = *(ptr + i);

        for (int j = 0; j < 9; j++)
        {
            if (comparado > *(ptr + j))
            {
                maior++;
            }
            else if (maior >= 7)
            {
                printf("O maior numero e o %i\n", *(ptr + i));
                printf("E ele esta em %i na lista.", i+1);
            }
        } 
        maior = 0;
    }
}