//Identifique o maior valor dentro de uma sequência de valores
//armazenadas em um array

#include<stdio.h>
int main()
{
    int numeros[5] = {2 ,7 , 3, 15, 9};
    int *ptr = numeros;
    int maior = 0;

    for (int i = 0; i < 6; i++)
    {   
        int comparado = *(ptr + i);

        for (int j = 0; j < 6; j++)
        {
            if (comparado > *(ptr + j))
            {
                maior++;
            }
            else if (maior >= 4)
            {
                printf("%i\n", *(ptr + i));
            }
        } 
        maior = 0;
    }
}