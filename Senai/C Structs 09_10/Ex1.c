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

    char Descricao[15];
}
Compromisso;

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
    scanf("%i", &pessoa.Descricao);
    
    if (pessoa.Segundos > 59)
    {
        pessoa.Minuto++;
        pessoa.Segundos -= 60;
    }
    else if (pessoa.Minuto)
    {
        pessoa.Hora++;
        pessoa.Minuto -= 60;
    }
    else if (pessoa.Hora > 60)
    {
       pessoa.Hora -=24;
       pessoa.Dia++;
    }
    printf("%i:", pessoa.Hora);
    printf("%i:", pessoa.Minuto);
    printf("%i", pessoa.Segundos);



}