// 1 - Faça um programa que simule uma agenda telefonica. Utilize struct para as informações
// de usuários e armazene dentro de um arquivo de texto, formatado.
// Permita ao usuário encontrar um determinado contato dentro do programa utilizando seu nome.
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct
{
    char Nome[15];
    int Telefone;
} Info;

int main()
{
    FILE * arquivo;
    int tamanho, op;
    char linha[100];
    char nomeProcurado[15];

    printf(" 1 - Adicionar nova pessoa. \n 2 - Procurar pessoa.");
    scanf("%i", &op);

    switch (op)
    {
    case 1:
        printf("Quantas pessoas deseja adicionar: ");
        scanf("%i", &tamanho);

        Info *lista = malloc(tamanho * sizeof(int));

        arquivo = fopen("ListaTelefonica.txt", "a");

        for (int i = 0; i < tamanho; i++)
        {
            printf("Digite o nome: ");
            scanf("%s", &lista[i].Nome);

            printf("Digite o telefone: ");
            scanf("%i", &lista[i].Telefone);

            fprintf(arquivo, "%s %i \n",lista[i].Nome, lista[i].Telefone);
        }
        break;
    case 2:
        scanf("%s", &nomeProcurado);
        while (fgets(linha, sizeof(linha), arquivo) != NULL) 
        {
            if (strstr(linha, nomeProcurado) != NULL) 
            {
                printf("Nome encontrado: %s", linha);
            }
        }
        break;
        
    default:
        printf("Opcao invalida.");
        break;
    }


}