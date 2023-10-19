int verificarForca(char *letra, char *senha, char *palavra){
    int sim;

    for(int i = 0; i <= strlen(palavra); i++)
    {
        if (palavra[i] == letra)
        {   
            if (senha[i] != letra)
            {
                sim = i;
            }
        }     
    }
    if (sim < 7)
    {
        return sim;
    }
    else{
        return 100;
    }
}

int Cronometro()
{
    int hora = 0, minuto = 0, segundo = 0;
    while (1)
    {
        

        Sleep(1000);
        system("cls");
        printf("%2i : %2i : %2i", hora, minuto, segundo);

        segundo++;

        if (segundo > 59)
        {
            minuto++;
            segundo = 0;
        }
        else if (minuto > 59)
        {
            hora++;
            minuto = 0;
        }
        else if (hora > 23)
        {
            hora = 0;
        }
    }
}

int Temporizador(int hora, int minuto, int segundo)
{
    while (1)
    {
        Sleep(1000);
        system("cls");
        printf("%2i : %2i : %2i", hora, minuto, segundo);
        if (segundo > 0)
        {
            segundo--;
        }

        if (segundo == 0 && minuto == 0 && hora == 0)
        {
            Sleep(1000);
            system("cls");
            printf("%2i : %2i : %2i", hora, minuto, segundo);
            printf("\nTempo esgotado!!");
            Sleep(1000);
            break;
        }
        if (segundo == 0 && minuto > 0)
        {
            minuto--;
            segundo = 59;
        }
        if (minuto == 0 && segundo == 0)
        {
            hora--;
            minuto = 59;
            segundo = 59;
        }
    }
}

int HoraAtual()
{
    while (1)
    {
        struct tm *data_hora_atual;
        time_t segundos;
        time(&segundos);

        data_hora_atual = localtime(&segundos);

        Sleep(1000);
        system("cls");
        printf("%2d:", data_hora_atual->tm_hour);
        printf("%2d:", data_hora_atual->tm_min);
        printf("%2d\n", data_hora_atual->tm_sec);
    }
}


#include <string.h>
#include<windows.h>
#include<stdio.h>
#include <time.h>
int main()
{

//1 - Faça um jogo da forca em linguagem C onde o usuário consiga adivinhar
// a palavra com o número máximo de tentavas sendo 6. O programa deve ser feito todo baseado em funções.

// #include<stdio.h>
// int main()
// {
    system("cls");
    char palavra[7] = "morango";
    char letra;
    int acertos = 0;
    int tentativas = 10;
    char senha[7] = "_______";
    int ganhou = 0;
    int novamente =0 ;

    while(1)
    {   
        printf(" \n%c %c %c %c %c %c %c", senha[0], senha[1], senha[2], senha[3], senha[4], senha[5], senha[6]);  
        printf("\nDigite uma letra: ");
        scanf(" %c", &letra);

        if (senha[verificarForca(letra, senha, palavra)] != letra)
        {   
            senha[verificarForca(letra, senha, palavra)] = letra;
            acertos++;
            
        }
        if(verificar(letra, senha, palavra) == 100)
        {
                tentativas--;  
        }
        else{
            ganhou++;
        }
        if(ganhou == 7)
        {
            system("cls");
            printf(" \n%c %c %c %c %c %c %c", senha[0], senha[1], senha[2], senha[3], senha[4], senha[5], senha[6]);  
            printf("\nVoce ganhou!!!!!");
            break;
        }
        system("cls");
        printf("\nVoce tem %i tentativas.", tentativas);
        
        acertos = 0;
        
        if(tentativas <= 0)
        {
            printf("\nVoce perdeu :(");
            printf("\nDeseja tentar novamente? (1-sim / 2-nao): ");
            scanf("%i", &novamente);
            switch (novamente)
            {
                case 1:
                    acertos = 0;
                    senha[7] = "_______";
                    tentativas = 10;
                    ganhou = 0;
                    break;
    
                case 2:
                    tentativas = 1000;
                    break;
            }
        }
        if(tentativas == 1000)
        {
            break;
        }
    }   
//}

// 2- Crie um “Relógio” em linguagem C, onde haverá opção de ver o horário atual, o cronômetro e um temporizador.

// #include <stdio.h>
// #include <time.h>
// #include <Windows.h>
// int main()
// {
    int op = 0, hora, minuto, segundo;
    while (1)
    {

        printf("\n------------------------------");
        printf("\n|                            |");
        printf("\n|     1 - Horario atual      |");
        printf("\n|     2 - Temporizador       |");
        printf("\n|     3 - Cronometro         |");
        printf("\n|                            |");
        printf("\n------------------------------");

        printf("\nDigite a opcao desejada: ");
        scanf("%i", &op);

        switch (op)
        {
        case 1:
            HoraAtual();
            break;
        case 2:
            printf("Tempo em hora: ");
            scanf("%i", &hora);

            printf("Tempo em minuto: ");
            scanf("%i", &minuto);

            printf("Tempo em segundo: ");
            scanf("%i", &segundo);

            Temporizador(hora, minuto, segundo);
            break;
        case 3:
            Cronometro();
            break;

        default:
            break;
        }
    }
    
//}
}
