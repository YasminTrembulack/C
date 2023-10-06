//Faça a leitura de todos os valores em posições de duas matrizes 4x4. Calcule a multiplicação do valor absoluto das duas e exiba o resultado.
#include <stdio.h>

int main()
{
    int matriz_um[4][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int matriz_dois[4][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int soma_um = 0, soma_dois = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            soma_um += matriz_um[i][j];
            soma_dois += matriz_dois[i][j];
        }
    }
    
    printf("O resultado da multiplicacao da soma absoluta das duas matrizes e: %i ", (soma_um * soma_dois));

}