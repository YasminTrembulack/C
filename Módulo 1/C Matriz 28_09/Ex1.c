#include<stdio.h>
int main()
{   
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a nota de uma materia: \n");
        for (int j = 0; j< 3; j++)
        {
            scanf("%i", &matriz[i][j]);
        }
    }


    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 3; k++)
        {       
            printf("%c", matriz[j][k]); 
        }
         printf("\n");   
    }
        
}
    


