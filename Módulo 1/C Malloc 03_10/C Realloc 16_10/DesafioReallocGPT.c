//  Crie um programa em C que simule um e-commerce de material de construção. 
//  Seu programa deverá cadastrar novos produtos, alocando memória para a quantidade necessária. 
//  O usuário poderá inserir novos produtos após a primeira inserção. 
//  Poderá ser feito um orçamento do valor que será gasto na compra de produtos escolhidos. 
//  O usuário poderá efetuar a compra se o valor inserido que foi inserido for suficiente. 
//  Caso o valor seja maior, devolva o troco. Após esses processos, 
//  imprima uma nota fiscal em um arquivo de texto e permita dentro do programa 
//  exibir todas as compras inseridas em um arquivo de texto.
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char Nome[15];
    char Descricao[75];
    int Valor;

} Produto;

int main()
{
    int sair = 0, aba = 0, qnt = 0, adicionarMais = 0, nova_qnt = 0;
    int linhas = 0;
    char caractere;

    Produto *produtosADD = NULL; // Inicialize como NULL para usar realloc

    FILE *loja;

    while (sair != 1)
    {
        switch (aba)
        {
        case 0:
            printf("\n--------------MENU---------------\n");
            printf("|    1 - Cadastrar produto.     |\n");
            printf("|    2 - Comprar produtos.      |\n");
            printf("|    3 - Visualizar carrinho.   |\n");
            printf("|    4 - Sair.                  |\n");
            printf("---------------------------------\n");
            printf("Selecione uma opção: ");
            scanf("%i", &aba);
            break;

        case 1:
            printf("Quantos produtos deseja cadastrar? ");
            scanf("%i", &qnt);

            produtosADD = (Produto *)malloc(qnt * sizeof(Produto)); // Use malloc

            for (int i = 0; i < qnt; i++)
            {
                printf("Nome do produto: ");
                scanf(" %[^\n]", produtosADD[i].Nome);

                printf("Descricao do produto: ");
                scanf(" %[^\n]", produtosADD[i].Descricao);

                printf("Valor do produto (por unidade): ");
                scanf("%d", &produtosADD[i].Valor);
            }

            loja = fopen("ProdutosCadastrados.txt", "a");
            for (int i = 0; i < qnt; i++)
            {
                fprintf(loja, "%s %s %d\n", produtosADD[i].Nome, produtosADD[i].Descricao, produtosADD[i].Valor);
            }
            fclose(loja);

            printf("Deseja cadastrar mais produtos? (1-Sim / 2-Nao) ");
            scanf("%i", &adicionarMais);

            if (adicionarMais == 2)
            {
                aba = 0;
                printf("Produtos adicionados com sucesso!!");
            }
            else
            {
                printf("Quantos produtos deseja adicionar? ");
                scanf("%i", &nova_qnt);
                produtosADD = (Produto *)realloc(produtosADD, (qnt + nova_qnt) * sizeof(Produto));
                qnt += nova_qnt; // Atualize qnt
            }
            break; // Adicione break aqui

        case 2:

            while ((caractere = fgetc(loja)) != EOF) 
            {
                if (caractere == '\n') 
                {
                    linhas++;
                }
            }
            loja = fopen("ProdutosCadastrados.txt", "r");
            printf("\n--------------PRODUTOS---------------\n");
            while (fscanf(loja, "%s %s %d", produtosADD[linhas].Nome, produtosADD[linhas].Descricao, &produtosADD[linhas].Valor) != EOF)
            {
                printf("\t %s R$%d,00\n", produtosADD[linhas].Nome, produtosADD[linhas].Valor);
            }
            printf("---------------------------------\n");
            aba = 0;
            fclose(loja); // Não esqueça de fechar o arquivo
            break;

        case 4:
            sair = 1;
            break;
        default:
            break;
        }
    }

    // Libere a memória alocada antes de sair
    free(produtosADD);

    printf("Loja fechada!!");
    return 0;
}