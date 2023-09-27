//Faça um programa que receba dois arrays e calcule a diferença absoluta deles.
#include<stdio.h>
int main()
{
    int lista_um[5] = {4, 7, 5, 2, 10};
    int lista_dois[5] = {7, 5, 2, 4, 0};
    int igual_um = 0;
    int igual_dois = 0;

    for (int i = 0; i < 5; i++)
    {
        int comparado_um = lista_um[i];
        int comparado_dois = lista_dois[i];

        for (int j = 0; j < 5; j++)
        {
            if (comparado_um == lista_dois[j])
            {
                igual_um++;
            }
            if (comparado_dois == lista_um[j])
            {
                igual_dois++;
            }
             
        }
        if (igual_um < 1)
        {
            printf("%i\n", lista_um[i]);
        }
        if (igual_dois < 1)
        {
            printf("%i\n", lista_dois[i]);
        }
        igual_dois = 0;
        igual_um = 0;
    }
}