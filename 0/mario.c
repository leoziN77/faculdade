#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        //Tamanho desejado
        n = get_int ("Altura: ");
    }
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1)
                printf(" ");
            else
            printf("#");
        }
        printf("\n");
    }
}