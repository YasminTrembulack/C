//Crie uma matriz 5x5 de inteiros e insira valores em cada uma das posições. Você deverá localizar os valores pares e colocar em um outro array para fazer a exibição.

#include<stdio.h>

int main()
{
    int matriz[5][5];
    int pares[25];
    int posicao = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o valor da linha %i coluna %i: ", (i+1), (j+1));
            scanf("%i", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
          if (matriz[i][j] % 2 == 0)
          {
            pares[posicao] = matriz[i][j];
            posicao++;
          }
        }
    }

    for (int i = 0; i < posicao; i++)
    {
        printf("%i \t", pares[i]);
    }
}