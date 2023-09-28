#include<stdio.h>
int main()
{   
    char materia[4][3] = {"Mat", "Bio", "Fis", "His"};
    int matrix[4][3];

    for (int i = 0; i < 4; i++)
    {
        printf("Digite a nota de uma materia: \n");
        for (int j = 0; j< 3; j++)
        {
            scanf("%i", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                /* code */
            }
            
        }
        
    }
    


}