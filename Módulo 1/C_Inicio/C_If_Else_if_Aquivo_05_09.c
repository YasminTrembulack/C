#include<stdio.h>
#include<stdlib.h>
int main()
{

// 1.Faça uma prova de matemática para crianças que estão aprendendo a somar números inteiros menores do que 100. 
// Escolha números aleatórios entre 1 e 100 e mostre na tela a pergunta: "Qual é a soma de a + b?", 
// onde a e b são os números aleatórios. Peça a resposta. Faça cinco perguntas ao aluno e mostre para ele as perguntas 
// e as respostas corretas, além de quantas vezes o aluno acertou dentro de um arquivo .txt

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
int a, b, soma, resposta, ACERTOS, i;


FILE * arquivo;
arquivo = fopen("acertos.txt", "w");

ACERTOS = 0;
for (i = 1; i <= 5; i++)
{
    srand(time(NULL));
    a = rand() % 101;
    b = rand() % 101;
    soma = a + b;

    printf("\\nQuanto e %i + %i: ", a, b);
    scanf("%i", &resposta);
    if (resposta == soma){
        printf("Voce acertou!!!");
        ACERTOS++;

    }
    else{
        printf("Voce errou :(");
    }

    }
fprintf(arquivo, "A sua pontuacao foi de: %i", ACERTOS);

printf("\\nVoce acertou %i vezes.", ACERTOS);
fclose(arquivo);

//}

// 2- Faça um programa que disponibilize um menu para converter celsius para fahrenheit ou fahrenheit para celsius. 
// Exiba mensagens de aviso, por exemplo: “Temperatura elevada”. Esse programa deve ser feito utilizando apenas switch e ternário.

// #include<stdio.h>
// int main()
// {
int OPCAO;
float temp, tempF, tempC;

printf("Digite 1 para converter para Fahrenheit ou 2 para converter para Celsius: ");
scanf("%i", &OPCAO);

switch(OPCAO)
{
case 1:
printf("Digite a temperatura: ");
scanf("%f", &temp);
tempF = (temp * 1.8) + 32;
printf("A temperatura em fahrenheit e: %f", tempF);
(tempF > 77) ? printf("\nTemperatura Elevada") : printf("\nTemperatura Normal");
break;


    case 2:
        printf("Digite a temperatura: ");
        scanf("%f", &temp);
        tempC = (temp - 32) * 0.5555;
        printf("A temperatura em celsius e: %f", tempC);
        (tempC > 25) ? printf("\\nTemperatura Elevada") : printf("\\nTemperatura Normal");
        break;

}

//}

}