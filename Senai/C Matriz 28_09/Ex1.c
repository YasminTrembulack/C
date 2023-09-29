#include<stdio.h>
int main()
{   
    int matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a nota de uma materia: \n");
        for (int j = 0; j< 3; j++)
        {
            scanf("%i", &matrix[i][j]);
        }
    }


    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 3; k++)
        {       
            printf("%c", matrix[j][k]); 
        }
         printf("\n");   
    }
        
}
    


