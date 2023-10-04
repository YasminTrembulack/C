//4-Faça um programa para corrigir uma prova com 10 questões de múltipla escolha (a, b, c, d),
//em uma turma com 3 alunos. Cada questão vale 1 ponto. Leia o gabarito, e para cada aluno leia
//sua matricula (número inteiro) e suas respostas. Calcule e escreva: Para cada aluno, escreva
//sua matrícula, suas respostas, e sua nota. O percentual de aprovação, assumindo média 7.0.

#include<stdio.h>
int main()
{
    char matriz[5][10] = {{'A', 'D', 'C', 'B', 'D', 'C', 'D', 'B', 'C', 'C'},
                        {'A', 'C', 'C', 'B', 'B', 'A', 'D', 'B', 'C', 'C'},
                        {'B', 'B', 'C', 'B', 'B', 'C', 'D', 'B', 'D', 'C'},
                        {'C', 'D', 'C', 'B', 'C', 'A', 'C', 'B', 'C', 'C'},
                       {'A', 'B', 'C', 'B', 'A', 'A', 'D', 'B', 'A', 'C'}};

    char nomes[5][6] = {"Murilo", "Yasmin", "Marina", "Carlos", "Marcos"};
    char gabarito[10] = {'A', 'B', 'C', 'B', 'A', 'A', 'D', 'B', 'C', 'C'};
    int matricula[5];
    int notas[5];

    for (int i = 0; i < 5; i++)
    {   
        int uma_matricula = 0;
        printf("Digite o numero da matricula: ");
        scanf("%i", &uma_matricula);
        
        matricula[i] = uma_matricula;

        int nota = 0;
        for (int j = 0; j < 10; j++)
        {
            if (matriz[i][j] == gabarito[j])
            {   
                nota++;
            }
        }
        notas[i] = nota;
        nota = 0;
    }
    
    
    for (int i = 0; i < 5; i++)
    {   
        for (int j = 0; j < 6; j++)
        {
            printf("%c", nomes[i][j]);       
        }

        printf("\t%i", matricula[i]);   
        printf("\n %i0 %% \t", notas[i]);

        if (notas[i]>= 7)
        {
            printf("Aprovado!!!\n"); 
        }
        else
        {
            printf("Reprovado.\n"); 
        }
        
    }
}