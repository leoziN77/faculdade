#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    float num,num1,subtracao,multi,div,soma;

    printf("Calculadora b�sica\n");
    printf("Entre com o 1� n�mero: ");
    scanf("%f", &num);
    printf("Entre com o 2� n�mero: ");
    scanf("%f", &num1);

    soma = num + num1;
    subtracao  = num - num1;
    multi   = num * num1;
    div  = num / num1;

    printf("\nsoma �: %.2f\n", soma);
    printf("subtra��o �: %.2f\n", subtracao);
    printf("multiplica��o �: %.2f \n", multi);
    printf("divis�o �: %.2f \n", div);
    return 0;
}

