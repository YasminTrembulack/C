#include<stdio.h>
int main()
{

// 1 - Faça um programa que leia informações de um usuário(Nome e sobrenome, Data de nascimento, CPF,)
// e exiba esses dados em uma espécie de certificado de conclusão do curso TDS;

// #include<stdio.h>
// int main()
// {
int cpf = 0, nasciment0 = 0, dia = 0, ano =0;
char nome[20], sobrenome[30], mes[10];


printf("Digite seu CPF: ");
scanf("%i", &cpf);

printf("Digite sua data de nascimento");
printf("\\nDia: ");
scanf("%i", &dia);
printf("Mês (por extenso): ");
scanf("%s", &mes);
printf("Ano: ");
scanf("%i", &ano);

printf("Digite seu nome: ");
scanf("%s", nome);
printf("Digite seu sobrenome: ");
scanf("%s", sobrenome);

printf("Certificado de conclusão do curso TDS");
printf("\\nAluno(o) %s %s (%i), nascido no dia %i de %s de %i.",nome,sobrenome,cpf,dia,mes,ano);
return 0;
//}


//2.Utilizando operadores lógicos, desenvolva um código para pegar os valores individuais de cada bit de um número inteiro qualquer.

// #include<stdio.h>
// int main()
// {
int numero, bit, resposta;

	printf("Digite um numero: ");
	scanf("%i", &numero);

	printf("Digite o bit: ");
	scanf("%i", &bit);

	resposta = (numero >> bit-1) & 1;

	printf("O numero do bit e: %i", resposta);
//}

// 3.Utilizando operadores lógicos, desenvolva um código para inverter a ordem dos bits de um número. 
// Exemplo: 10110011 (179) deverá se tornar 11001101 (205).

//NÃO FINALIZADO
// #include<stdio.h>
// int main()
// {
int numero = 0, invertido = 0, bit, formula;


printf("Digite um numero: ");
scanf("%i", &numero);

bit = 4;
formula = (numero >> (bit- 1)) & 1;
invertido = formula;

printf("O numero invertido e: %i", invertido);

//}
}