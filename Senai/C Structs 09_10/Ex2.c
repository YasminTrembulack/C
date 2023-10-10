// 2.Construa uma estrutura aluno com nome, numero de matrícula e curso.
// Leia do usuário a informação de 5 alunos, armazene em vetor dessa
// estrutura e imprima os dados na tela.

#include <stdio.h>
typedef struct 
{
    char Nome[10];
    int Nmatricula;
    char Curso[20];
}
Aluno;

int main()
{   
    Aluno pessoas[5];
    
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno: ");
        scanf("%s", pessoas[i].Nome);

        printf("Digite o numero da matricula: ");
        scanf("%i", &pessoas[i].Nmatricula);

        printf("Qual o curso? ");
        scanf("%s", pessoas[i].Curso);
    }
    
    for ( int i = 0; i < 5; i++)
    {
       printf("Nome: %s  Numero Matricula: %i  Curso: %s\n", pessoas[i].Nome, pessoas[i].Nmatricula, pessoas[i].Curso);
    }
    


}