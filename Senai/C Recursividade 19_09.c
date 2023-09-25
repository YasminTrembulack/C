int tabuada(int x, int n)
{
    x++;
    if (x == 11)
    {
        return 1;
    }
    else
    {      
        int tab = x * n;
        printf("\n%i x %i = %i", n, x, tab);
        return tabuada(x, n);
    }        
}   

int tabuada2(int i, int numero)
{
    
    if (i < 11)
    {
        return numero * i ;
    }
    else
    {      
        int tab = i * tabuada(i+1, numero);
        
        return tab;
    }        
}   

int binario(int posicao, char *bin, int numero){
    
 
    if (numero <= 0)
    {
        printf(" \n%c%c%c%c%c%c%c%c", bin[7], bin[6], bin[5], bin[4], bin[3], bin[2], bin[1], bin[0]);  ;
        return 1;
    }    
    
    else
    {
        int binar = numero % 2;
        
        bin[posicao] = binar+'0'; //tranformar int em char
        posicao++;
        return binario(posicao, bin, numero / 2);
    }
}

#include<stdio.h>
#include<Windows.h>
#include<time.h>
int main()
{   

//1 - Faça um programa que exiba a tabuada de um valor inserido por um usuário.

// #include<stdio.h>
// #include<Windows.h>
// int main()
// {   
    system("cls");
    int x = 0;
    tabuada(x , 4);
//}


// #include<stdio.h>
// #include<Windows.h>
// int main()
// {   
    system("cls");
    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for ( int i = 0; i <= 11; i++)
    {
        printf("\n%i x %i = %i", numero, i, tabuada2(i , numero));
    }
    
//}

//2 - Faça um programa que converta um número decimal para um número binário utilizando recursividade

// #include<stdio.h>
// #include<Windows.h>
// #include<time.h>
// int main()
// {
    while (1)
    {
        char bin[8] = "00000000";
        int posicao = 0;
        int numero;

        printf("\nDigite o numero que deseja converter.\n(Digite S para sair).\n> ");
        scanf("%i", &numero);

        binario(posicao, bin, numero);
        
    }
//}
}