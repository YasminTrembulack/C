#include<stdio.h>
int main()
{

// 1 - Calcule a média ponderada onde cada trimestre tem um peso
// diferente(2,3,5). Insira as notas diretamente no código para resolução


// #include<stdio.h>
// int main()
// {
int peso1 = 2, peso2 = 3, peso3 = 5, nota1, nota2, nota3;


printf("Digite a nota1: ");
scanf("%i", &nota1);
printf("Digite a nota2: ");
scanf("%i", &nota2);
printf("Digite a nota3: ");
scanf("%i", &nota3);

float media_ponderada = ((peso1 * nota1) + (peso2 * nota2) + (peso3 * nota3)) / (peso1 + peso2 + peso3);
printf("A média ponderada é: %f", media_ponderada);
//}


// 2 - Faça uma conversão de celsius para fahrenheit, exiba essa conversão, e
// logo após exiba a conversão do resultado anterior para kelvin


// #include<stdio.h>
// int main()
// {

int tempC;
float tempF, tempK;

printf("Digite a temperatura em celsius: ");
scanf("%i", &tempC);

tempF = (tempC * 9/5) + 32;
tempK = (tempF - 32) * 0.5555 + 273,15;

printf("A temperatura em Fahrenheit é: %f", tempF);
printf("\nA temperatura em Kelvin é: %f", tempK);
//}


// 3-Utilizando operadores matemáticos, desenvolva um código para que mapeie duas escalas
// de valores diferentes utilizando uma interpolação linear (regra de três). 
// Exemplo: dada a escala A que possuí valores mínimo e máximo de 0 e 4095, 
// a escala B que possuí valores mínimo e máximo de -5 a 5, e um valor de 2000 inicialmente na escala A,
// o seu valor na escala B (resultado do programa) deverá ser -0.115995.


// #include<stdio.h>
// int main()
// {
float x = 0, x0 = 4095, y0 = 5, y = 0;

printf("Digite o valor de x: ");
scanf("%f", &x);

y = (0.0024420024420) * (x - x0) + y0;

printf("O resultado é = %f",y);
//}


// 4 -  Utilizando operadores matemáticos, desenvolva um código para detectar se um número inteiro é par ou ímpar.


// #include<stdio.h>
// int main()
// {
int numero;
printf("Digite um numero: ");
scanf("%i", &numero);

if(numero % 2 == 0){
    printf("O numero e par");
}
else{
    printf("O numero e impar");
}

//}
}