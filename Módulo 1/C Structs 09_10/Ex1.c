// 1. Escreva um trecho de codigo para fazer a criação dos novos tipos de
// dados conforme solicitado abaixo:

// • Horário: composto de hora, minutos e segundos.

// • Data: composto de dia, mês e ano.

// • Compromisso: composto de uma data, horario e texto que descreve o
// compromisso.

#include <stdio.h>

typedef struct
{
    int Hora;
    int Minuto;
    int Segundos;

    int Dia;
    int Mes;
    int Ano;

    char Descricao[150];
} Compromisso;

int main()
{
    Compromisso pessoa;

    printf("HORA : MINUTO : SEGUNDOS\n");
    scanf("%i", &pessoa.Hora);
    scanf("%i", &pessoa.Minuto);
    scanf("%i", &pessoa.Segundos);

    printf("DIA : MES : ANO\n");
    scanf("%i", &pessoa.Dia);
    scanf("%i", &pessoa.Mes);
    scanf("%i", &pessoa.Ano);

    printf("DESCRICAO:\n");
    scanf("%s", &pessoa.Descricao);

    if (pessoa.Segundos > 59)
    {
        pessoa.Minuto++;
        pessoa.Segundos -= 60;
    }
    else if (pessoa.Minuto > 59)
    {
        pessoa.Hora++;
        pessoa.Minuto -= 60;
    }
    else if (pessoa.Hora > 23)
    {
        pessoa.Hora -= 24;
        pessoa.Dia++;
    }

    printf("\n%i/", pessoa.Dia);
    printf("%i/", pessoa.Mes);
    printf("%i  -  ", pessoa.Ano);

    printf("%i:", pessoa.Hora);
    printf("%i:", pessoa.Minuto);
    printf("%i\n", pessoa.Segundos);

    printf("%s", pessoa.Descricao);
}