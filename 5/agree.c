#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Você condorda? ");
    if (c == 'y' || c == 'Y')
    {
        printf("Concordo.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Não concordo.\n");
    }
}