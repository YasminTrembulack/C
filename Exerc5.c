// Faça um programa que leia a quantidade de pessoas que o usuário deseja 
// inserir para armazenar em um arquivo de texto essas informações.  usar struct e FILE. (2,0)

#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    char nome[20];
    int idade;
}Pessoa;



int main()
{
    FILE *arquivo;
    int tamanho = 0;
    
    
    printf("Quantas pessoas deseja adicionar: ");
    scanf("%i", &tamanho);

    Pessoa *pessoa = malloc(tamanho * sizeof(Pessoa));
    
    for (int i = 0; i < tamanho; i++)
    {   
        printf("Digite o nome: ");
        scanf("%s", pessoa[i].nome);
        printf("Digite a idade: ");
        scanf("%i", &pessoa[i].idade);
    }

    arquivo = fopen("Nomes.txt", "a");
    for (int i = 0; i < tamanho; i++)
    {
        fprintf(arquivo, "Nome: %s Idade: %i\n", pessoa[i].nome, pessoa[i].idade);
    }
    fclose(arquivo);
    free(pessoa);
    
}