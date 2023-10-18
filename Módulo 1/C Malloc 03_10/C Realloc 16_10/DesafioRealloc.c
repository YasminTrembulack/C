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
    char Nome[20];
    char Descricao[100];
    int Valor;

}Produto;

int main()
{
    int sair = 0, aba = 0, qnt = 0;
    FILE * loja;

    while (sair == 0)
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
            printf("Selcione uma opcao: ");
            scanf("%i", &aba);

            break;
        case 1:
            printf("Quantos produtos deseja cadastrar? ");
            scanf("%i", &qnt);

            Produto *produtosADD = malloc(qnt * sizeof(Produto));

            loja = fopen("ProdutosCadastrados.txt", "a");
            for (int i = 0; i < qnt; i++)
            {
                printf("Nome do produto: ");
                scanf("%s", produtosADD[i].Nome);

                printf("Descricao do produto: ");
                scanf("%s", produtosADD[i].Descricao);

                printf("Valor do produto( por unidade ): ");
                scanf("%i", produtosADD[i].Valor);

                fprintf(loja, "");
            }
            


        default:
            break;
        }
        
    }
    


}


