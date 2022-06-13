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
        //Blankspaces
        for (int j = n - 1; j >= 0; j--)
            printf(" ");

        //Hashtag
        for (int j = 0; j <= i; j++)
            printf("#");
        printf("\n");
    }
}