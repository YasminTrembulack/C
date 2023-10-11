//3- Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha,
//referentes a 5 alunos. Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser
//a, b, c ou d. Seu programa deverá comparar as respostas de cada candidato com o gabarito e emitir um vetor 
//denominado resultado, contendo a pontuação correspondente a cada aluno.
#include<stdio.h>
int main()
{
    char matriz[5][10] = {{'A', 'B', 'C', 'B', 'A', 'A', 'D', 'B', 'C', 'C'},
                        {'A', 'B', 'C', 'B', 'A', 'A', 'D', 'B', 'C', 'C'},
                        {'A', 'B', 'C', 'B', 'A', 'A', 'D', 'B', 'C', 'C'},
                        {'A', 'B', 'C', 'B', 'A', 'A', 'D', 'B', 'C', 'C'},
                       {'A', 'B', 'C', 'B', 'A', 'A', 'D', 'B', 'C', 'C'}};

    char gabarito[10] = {'A', 'B', 'C', 'B', 'A', 'A', 'D', 'B', 'C', 'C'};

    int notas[5];

    for (int i = 0; i < 5; i++)
    {
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
        printf(" %i \t", notas[i]);
    }
    
}