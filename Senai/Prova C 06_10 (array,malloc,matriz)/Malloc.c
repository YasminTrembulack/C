//Uma imobiliária deseja um sistema para armazenar apenas o valor de imóveis vendidos no período de um mês.
//Seu programa deve perguntar ao usuário quantos imóveis foram vendidos e alocar memória para fazer o armazenamento de valores.

#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int vendas = 0;
    int total = 0;
    printf("Quantos imoveis foram vendidos durante o mes?");
    scanf("%i", &vendas);

    int *valores = malloc(vendas * sizeof(int));

    for (int i = 0; i < vendas; i++)
    {
        printf("Digite o valor: ");
        scanf("%i", &valores[i]); 
         total += valores[i];
    }

    printf("As vendas do mes foram:\n");
    for (int i = 0; i < vendas; i++)
    {   
        printf("R$%i,00\t", valores[i]);
    }
    printf("\nTotalizando: R$%i,00", total);

    free(valores);
    
}