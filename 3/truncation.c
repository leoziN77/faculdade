#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Pegando dois numeros aleatórios
    int x = get_int("x: ");
    int y = get_int("y: ");
    //Dividindo x por y
    float z = x / y;
    //E vai gerar (z= resultado)
    printf("%f\n", z);
}