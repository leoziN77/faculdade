#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Número inteiro escrito pelo usuario
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);

    //Imprimir x pontos de interrogação
    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}