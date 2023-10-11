//Crie uma matriz 5x5 de inteiros e insira valores em cada uma das posições. Você deverá localizar os valores pares e colocar em um outro array para fazer a exibição.

#include<stdio.h>
#include <stdlib.h>

int main()
{
  int matriz[5][5];
  int quantidade_pares = 0, posicao = 0;

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("Digite o valor da linha %i coluna %i: ", (i+1), (j+1));
      scanf("%i", &matriz[i][j]);
      if (matriz[i][j] % 2 == 0)
      {
        quantidade_pares++;
      }
    }
  }

  int *pares = malloc((quantidade_pares+1)* sizeof(int));

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
    
  free(pares);

}