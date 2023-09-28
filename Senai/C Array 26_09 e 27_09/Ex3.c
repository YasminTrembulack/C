//Faça um programa para uma escola chamada IANES que fará todo o
//gerenciamento de alunos, cursos, e média de alunos. Utilize um arquivo
//de texto para fazer esse gerenciamento.(Escrita e leitura)
#include<stdio.h>
int main()
{
   
    
    char nome[10], curso[20], media[5];
    char array[6][20] = {"Nome:  1", "  Curso: ", "3", "  Média: ", "4\n" };
    char *ptr = array;
    char *ptr2 = nome;

    printf("Digite o nome do aluno: ");
    scanf("%s", &nome);

    printf("Digite o curso do aluno: ");
    scanf("%s", &curso);

    printf("Digite a média do aluno: ");
    scanf("%s", &media);



        *(ptr + 7) = nome;
    
   
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c", array[i][j]);
        }  
    }

    
    
    
    




}
