// 3.Crie uma estrutura representando os alunos de um determinado curso. A
// estrutura deve conter a matrícula do aluno, nome, nota da primeira prova,
// nota da segunda prova e nota da terceira prova.

// (a) Permita ao usuario entrar com os dados de 5 alunos.

// (b) Encontre o aluno com maior nota da primeira prova.

// (c) Encontre o aluno com maior media geral.

// (d) Encontre o aluno com menor media geral

// (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o
// valor 6 para aprovac¸ao.
#include<stdio.h>

typedef struct 
{
    char Nome[20];
    int Nota_um;
    int Nota_dois;
    int Nota_tres;
}
Aluno;

int main()
{
    Aluno pessoas[5];
    int maior_nota_prova_um = 0;
    int nome_aluno_maior_nota;

    int maior_nota_media = 0;
    int nome_aluno_maior_media;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno: ");
        scanf("%s", pessoas[i].Nome);

        printf("Digite nota da primeira prova: ");
        scanf("%i", &pessoas[i].Nota_um);

        printf("Digite nota da segunda prova: ");
        scanf("%i", &pessoas[i].Nota_dois);

        printf("Digite nota da terceira prova: ");
        scanf("%i", &pessoas[i].Nota_tres);
    }

    for (int i = 0; i < 5; i++)
    {
        if (pessoas[i].Nota_um > maior_nota_prova_um)
        {
            maior_nota_prova_um = pessoas[i].Nota_um;
            nome_aluno_maior_nota = i;
        }
        int media = (pessoas[i].Nota_um + pessoas[i].Nota_dois + pessoas[i].Nota_tres)/3;
        if (media>maior_nota_media)
        {
            maior_nota_media = media;
            nome_aluno_maior_media = i;
        }
        
    }
    printf("A maior nota da Pr1 foi %i do aluno: %s", maior_nota_prova_um, pessoas[nome_aluno_maior_nota].Nome);
    printf("A maior nota da Pr1 foi %i do aluno: %s", maior_nota_media, pessoas[nome_aluno_maior_media].Nome);
}


