#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Estou perguntando se você concorda
    char c = get_char("Você condorda? ");
    //Estou respondendo com Y ou N
    if (c == 'y' || c == 'Y')
    {
        printf("Concordo.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Não concordo.\n");
    }
}