#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char Modelo[100];
    char Fabricante[100];
    char Cor[100];
    int Ano;
    int Valor;
} Veiculo;

int main()
{
    int tamanho = 0;
    int sair = 0;
    int op = 0;
    char linha[100];

    FILE *arquivo;

    printf("Quantos veiculos deseja adicionar: ");
    scanf("%d", &tamanho);

    Veiculo *lista = malloc(tamanho * sizeof(Veiculo));
    while (sair != 1)
    {
        int novoTamanho = 0;
        arquivo = fopen("lista.txt", "a");

        for (int i = 0; i < tamanho; i++)
        {
            printf("\nModelo: ");
            scanf("%s", lista[i].Modelo);

            printf("Fabricante: ");
            scanf("%s", lista[i].Fabricante);

            printf("Cor: ");
            scanf("%s", lista[i].Cor);

            printf("Ano: ");
            scanf("%d", &lista[i].Ano);

            printf("Valor: ");
            scanf("%d", &lista[i].Valor);

            fprintf(arquivo, "Modelo: %s Fabricante: %s Cor: %s Ano: %d Valor: %d\n", lista[i].Modelo, lista[i].Fabricante, lista[i].Cor, lista[i].Ano, lista[i].Valor);
        }
        fclose(arquivo);

        arquivo = fopen("lista.txt", "r");
        while (fgets(linha, sizeof(linha), arquivo) != NULL)
        {
            printf("%s", linha);
        }
        fclose(arquivo);

        printf("Deseja adicionar mais veiculos? (1 - Sim / 2 - Nao): ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Quantos veiculos deseja adicionar: ");
            scanf("%d", &novoTamanho);

            lista = realloc(lista, (tamanho + novoTamanho) * sizeof(Veiculo));

            tamanho = novoTamanho;
            break;
        case 2:
            sair = 1;
            break;
        }
    }

    free(lista);
    return 0;
}