//3- Leia uma matriz de 3 x 3 elementos. 
//Faça a inversão dos valores armazenados nessa matriz
#include <stdio.h>
int main()
{
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *ptr = matriz;
    int matriz_nova[3][3];
    int *ptr_nova = matriz_nova;
    int n = -2, k = -2;
    
    

    for (int i = 2; i > -1; i--) //linha
    {
        for (int j = 2; j > -1; j--)//coluna
        {
            *(ptr_nova + (i+n) * 3 + (j+k)) = *(ptr + i * 3 + j);
            
          k = k +2; 
        }

        k = -2;
        n = n + 2; 
    }

    for (int i = 0; i < 3; i++) //linha
    {
        for (int j = 0; j < 3; j++)//coluna
        {
            printf("%i",  *(ptr_nova + i * 3 + j));
            printf("\t");
        }
        printf("\n");
    }
}