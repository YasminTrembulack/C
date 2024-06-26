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

}Produto;

int main()
{
    int sair = 0, aba = 0, qnt = 0, adicionarMais = 0, nova_qnt = 0;
   
    FILE * loja;

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
            printf("Selcione uma opcao: ");
            scanf("%i", &aba);

            break;
        case 1:
            printf("Quantos produtos deseja cadastrar? ");
            scanf("%i", &qnt);

            Produto *produtosADD = malloc(qnt * sizeof(Produto));

            
            while (aba == 1)
            {
                loja = fopen("ProdutosCadastrados.txt", "a");
                for (int i = 0; i < qnt; i++)
                {
                    printf("Nome do produto: ");
                    scanf(" %[^\n]", &produtosADD[i].Nome);

                    printf("Descricao do produto: ");
                    scanf(" %[^\n]", &produtosADD[i].Descricao);

                    printf("Valor do produto( por unidade ): ");
                    scanf("%d", &produtosADD[i].Valor);

                    fprintf(loja, "%s %s %i\n", produtosADD[i].Nome, produtosADD[i].Descricao, produtosADD[i].Valor);
                }
                fclose(loja);

                printf("Deseja cadastrar mais produtos? ( 1-Sim / 2-Nao )");
                scanf("%i", &adicionarMais);

                if (adicionarMais == 2)
                {
                    aba = 0;
                    printf("Produtos adicionados com sucesso!!");
                    
                }
                else
                {
                    printf("Quantos produtos deseja cadastrar? ");
                    scanf("%i", &nova_qnt);
                    produtosADD = realloc(produtosADD, (qnt + nova_qnt) * sizeof(Produto));
                    qnt = nova_qnt;
                }
            }
           
            free(produtosADD);
        case 2:
            
            loja = fopen("ProdutosCadastrados.txt", "r");
            printf("\n--------------PRODUTOS---------------\n");
            while (fscanf(loja, "%s %s %s", produtosADD->Nome, produtosADD->Descricao, produtosADD->Valor) != EOF)
            {
                printf("|\t %s R$%s,00\t|\n", produtosADD->Nome,produtosADD->Valor);
            }
            printf("---------------------------------\n");
            aba = 0;    
            break;
        case 4:
            sair = 1;
            break;
        default:
            break;
        }
        
    }
    printf("Loja fechada!!");
}


