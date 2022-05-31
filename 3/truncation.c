#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Pegando dois numeros aleatórios, dividindo, e dando um resultado (z)
    int x = get_int("x: ");

    int y = get_int("y: ");

    float z = x / y;

    printf("%f\n", z);
}