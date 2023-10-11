//1- Receba valores em cada posição de uma matriz e 
//identifique a posição e o valor que está o maior deles.
#include<stdio.h>
int main()
{
    int numeros[2][3] = {{50, 30 , 103}, {15, 0, 100}};
    int *ptr = numeros;
    int valor = 0, linha, coluna;

    for (int i = 0; i < 2; i++) // linha
    { 
        for (int j = 0; j < 3; j++) // coluna
        {
            
            if (valor < *(ptr + i*3 +j))
            {
                valor = *(ptr + i*3 +j);
                linha = i + 1;
                coluna = j + 1;
                
            }
        } 
    }
    printf("O maior numero e o %i\n", valor);
    printf("E ele esta na linha %i na coluna %i.", linha, coluna);
}