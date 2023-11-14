// Crie um programa que compare o valor absoluto de duas matrizes e imprima qual é a maior matriz. (2,0)


int main()
{
    int matriz_um[4][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int matriz_dois[4][4] = {{1, 2, 3, 7}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int soma_um = 0, soma_dois = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            soma_um += matriz_um[i][j];
            soma_dois += matriz_dois[i][j];
        }
    }
    
    if (soma_um > soma_dois)
    {
        printf("A matriz UM e maior.");
    }
    else if (soma_um < soma_dois)
    {
        printf("A matriz DOIS e maior.");
    }
    else
    {
        printf("As matrizes sao IGUAIS.");
    }


}