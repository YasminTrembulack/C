//1- Leia um array com 10 posições e identifique se existem valores iguais neste array.
//se existirem, envie para um outro array e o exiba na tela.

#include <stdio.h>
int main()
{
    int array[10] = {0, 9, 3, 4, 5, 1, 6, 7, 8, 9};
    int array_dois[10] = {0};
    int posicao = 0, igual = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (array[i] == array[j])
            {    
                igual++;
            } 
            else if (array[i] == array_dois[j])
            {
                igual--;
            }
            if (igual == 2)
            {
                array_dois[posicao] = array[j];
                posicao++;  
            }      
         }  
         igual = 0;
    } 
        
    

    for (int i = 0; i < 10; i++)
    {
        printf("%i", array_dois[i]);
    }
}
