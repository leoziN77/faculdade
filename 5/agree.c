#include <cs50.h>
#include <stdio.h>

int main(void)
{
    chat c = get_char("Você condorda? ");
    if (c == 'y');
    {
        printf("Concordo\n");
    }
    else if (c == 'n')
    {
        printf("Não concordo\n");
    }
