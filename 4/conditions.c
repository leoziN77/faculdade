#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Valor para x
    int x = get_int("x: ");

    //Valor para y
    int y = get_int("y: ");

    //Comparar x e y
    if (x < y)
    {
        printf("x é menor que y\n");
    }
    else if (x > y)
    {
        printf("x é maior que y\n");
        
