//Crie uma função que receba um ponteiro de um array e exiba todas os
//valores armazenados nas posições.

#include<stdio.h>
void mostrar(int *ptr)
{
    for (int i = 0; i < 7; i++)
    {
        printf("%i\n", *(ptr + i));
    }
}


int main()
{
    int array[7] = {5, 45, 54, 18, 976, 28, 9};
    int *ptr = array;

    mostrar(ptr);
}