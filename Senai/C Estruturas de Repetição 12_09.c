#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
int main()
{

// 1- Faça um programa para adivinhar um número entre 1 e 1000. Este valor pode
// ser definido automaticamente, ou randomizado utilizando uma função rand.

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
    int num, palpite;
    
    srand(time(NULL));
    num = rand() % 1001;
    
    while (1){
        printf("\nDigite o palpite: ");
        scanf("%i", &palpite);

        if(palpite == num){
            printf("Voce acertou!!!");
            break;
        }
        else if(palpite < num){
            printf("Mais alto.");
        }
        else{
            printf("Mais baixo.");
        }
    }
    
//}

//2 - O chefe da empresa onde você trabalha lhe deu uma atividade: desenvolver um
//programa que faça a verificação de valores bancários e permita o saque ou o
//depósito. O saque só pode ser feito se o valor total da conta for maior que 60
//reais.

// #include<stdio.h>
// int main()
// {
    float saldo, saque, deposito, sair;
    int op;

    saldo = 100;
    sair = 0;

    while (sair == 0){
        printf("\n-----------Banco-----------");
        printf("\n1 - Saque \n2 - Deposito \n3 - Verifivar saldo \n4 - Sair");
        printf("\n--> Qual operacao vc deseja realizar? ");
        scanf("%i", &op);

        switch (op){
        case 1:
            if(saldo <= 60){
                printf("Impossivel realizar a operacao, seu saldo precisa se maior que R$60,00.");
                printf("Seu saldo atual e de R$%.2f", saldo);
            }    
            else{
                printf("\nSaque: ");
                scanf("%f", &saque);
                saldo = saldo - saque;
                printf("Seu saldo atual e de R$%.2f", saldo);
            }
            break;
        case 2:
            printf("\nDeposito: ");
            scanf("%f", &deposito);
            saldo = saldo + deposito;
            printf("Seu saldo atual e de R$%.2f", saldo);
            break;
        case 3:
            printf("Seu saldo atual e de R$%.2f", saldo);
            break;
        case 4:
            printf("Sessao finalizada com sucesso!");
            sair++;
            break;
        default:
            printf("Operacao invalida. tente novamente...");
            break;
        }
    }
//}

//3 - Faça um programa que exiba uma barra de carregamento para processar uma
//compra de um determinado produto.

// #include<stdio.h>
// #include<time.h>
// #include<windows.h>
// int main()
// {
    int i = 0, j = 0;
    while (i <=100){

        system("cls");
        j = 0;
        printf("%i %%", i);

        while (j<=i){

            printf("|");
            j = j + 1;
        }
        
        i = i + 1;
        Sleep(100);
        
    }
    return 0;
//}

// 4 - Faça um programa que bloqueie a entrada de números e apenas permita a
// passagem se a senha for igual a do sistema.


// #include<stdio.h>
// #include<ctype.h>
// int main()
//{
    char chave[4] = "abcd";
    char senha[4];
    int i = 0, a = 0, n = 0;

    while (1){
        printf("\nDigite a senha: ");
        scanf("%s", senha);

        while (i < 4){
            
            if (isdigit(senha[i])){
                n++;
            }
            else if (senha[i] == chave[i]){
                a++;
            }
                i++;
            
        }
        
        if (n >1 ){
            printf("Numeros nao sao aceitos.");
        }
        else if (a == 4){
            printf("Senha correta!");
            break;
        }
        else{
            printf("Senha incorreta. Tente novamente...");
        }
        
    }
// }

// #include<stdio.h>
// #include<ctype.h>
// int main(){
//     char chave[4] = "abcd";
//     char senha[4];
    

//     while (1){
//         printf("\nDigite a senha: ");
//         scanf("%s", senha);
//         int i = 0, a = 0, n = 0;

//         while (i < 4){
//             printf("\na %i", i);
//             if (senha[i] == chave[i]){
//                 a++;
                
//             }
//             else if (isdigit(senha[i])){
//                 n++;
//             }
//             i++;
//             break;
            
//         }
        
        
//         if (n >1 ){
//             printf("Numeros nao sao aceitos.");
//             printf("\n%i", n);
//             printf("\n%i", i);
//             printf("\n%i", a);

//             i =0;
//         }
//         else if (a == 4){
//             printf("Senha correta!");
//             break;
//         }
//         else{
//             printf("Senha incorreta. Tente novamente...");
//             printf("\n%i", n);
//             printf("\n%i", i);
//             printf("\n%i", a);

            
//         }
        
//     }
// }
}