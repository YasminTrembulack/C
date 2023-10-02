//2- Leia duas matrizes 4 x 4 e escreva uma terceira
// com os maiores valores de cada posiçao das matrizes lidas.  

#include <stdio.h>

int main()
{
    int matriz_um[4][4] = {{15, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14 ,15 ,16}};
    int *ptr_um = matriz_um;
    int matriz_dois[4][4] = {{1, 15, 14, 13}, {12, 11, 10, 9}, {8, 7, 6, 5}, {4, 3 ,2 ,1}};
    int *ptr_dois = matriz_dois;
    int matriz_nova[4][4];
    int *ptr_nova = matriz_nova;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (*(ptr_um + i *4 + j) >= *(ptr_dois + i *4 + j))
            {
                *(ptr_nova + i *4 + j) = *(ptr_um + i *4 + j);
            }
            else
            {
                *(ptr_nova + i *4 + j) = *(ptr_dois + i *4 +j);
            }
        }  
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i", *(ptr_nova + i *4 + j));
            printf("\t");
        }  
        printf("\n");
    }




}