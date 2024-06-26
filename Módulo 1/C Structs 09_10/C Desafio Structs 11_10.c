// 1 - Faça um programa que simule uma agenda telefonica. Utilize struct para as informações
// de usuários e armazene dentro de um arquivo de texto, formatado.
// Permita ao usuário encontrar um determinado contato dentro do programa utilizando seu nome.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Nome[15];
    int Telefone;
} Info;

int main()
{
    FILE *arquivo;
    int tamanho, op;
    char linha[100];
    char nomeProcurado[15];

    int igual = 0;
    int sair = 0;
    int encontrado = 0;

    while (sair != 1)
    {

        printf(" 1 - Adicionar nova pessoa. \n 2 - Procurar pessoa.\n 3 - Sair.\n>");
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
                scanf("%s", lista[i].Nome);

                printf("Digite o telefone: ");
                scanf("%i", &lista[i].Telefone);

                fprintf(arquivo, "%s %i \n", lista[i].Nome, lista[i].Telefone);
            }
            fclose(arquivo);
            free(lista);
            break;
        case 2:

            arquivo = fopen("ListaTelefonica.txt", "r");

            printf("Digite o nome que deseja encontrar: ");
            scanf("%s", nomeProcurado);

            int tamanho_nome = strlen(nomeProcurado);

            while (fgets(linha, sizeof(linha), arquivo) != NULL)
            {
                for (int i = 0; i < tamanho_nome; i++)
                {
                    if (linha[i] == nomeProcurado[i])
                    {
                        igual++;
                    }
                }
                if (igual == tamanho_nome)
                {
                    printf("\nNome encontrado: %s\n", linha);  
                    encontrado = 1;
                }
                igual =0;
            }
            if(encontrado == 0)
            {
                printf("\nNome nao encontrado.\n\n");
            }
            encontrado = 0;
            
            fclose(arquivo);
            break;
        case 3:
            sair = 1;
            break;
        default:
            printf("Opcao invalida.");
            break;
        }
    }
}
