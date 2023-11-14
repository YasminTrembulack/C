// Crie uma calculadora de valores inteiros.
//  Sua calculadora deverá possuir as operações básicas. 
//  Todos os cálculos devem ser feitos em funções e chamadas 
//  pelo switch case.(1,0)

#include <stdio.h>
int soma(int numeroA, int numeroB)
{
    return numeroA + numeroB;
}

int subtracao(int numeroA, int numeroB)
{
    return numeroA - numeroB;
}

int multiplicacao(int numeroA, int numeroB)
{
    return numeroA * numeroB;
}

int divisao(int numeroA, int numeroB)
{
    if (numeroB == 0)
    {
        printf("\nNumeros nao podem ser divididos por zero.");
    }
    else
    {
        return printf("\nO resultado da divisao e: %d", numeroA / numeroB);
    }
}


int main()
{   
    int sair = 0, op = 0, numeroA = 0, numeroB = 0;
    while (sair != 1)
    {   
        printf("\nDigite um numero:");
        scanf("%d", &numeroA);
        printf("Digite um numero:");
        scanf("%d", &numeroB);

        printf("\n\tSelecione uma opcao:\n\t1 - Soma.\n\t2 - Subtracao.\n\t3 - Multiplicaçao.\n\t4 - Divisao.\n\t0 - SAIR.\n\t>");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\nO resultado da soma e: %d", soma(numeroA,numeroB));
            break;
        case 2:
            printf("\nO resultado da subtracao e: %d", subtracao(numeroA,numeroB));
            break;
        case 3:
            printf("\nO resultado da multiplicacao e: %d", multiplicacao(numeroA,numeroB));
            break;
        case 4:
            divisao(numeroA, numeroB);
            break;
        case 0:
            printf("\nSaindo...");
            sair = 1;
            break;
        default:
            printf("\nOpcao invalida. Tente novamente...");
            break;
        }
    }
    



}
