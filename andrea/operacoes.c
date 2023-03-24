#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float numero1, numero2, resultado, A, B, C, D;
	char opcao;

	printf("\n*********************************\n");
	printf("*                               *\n");
	printf("*          Menu de opções       *\n");
	printf("*                               *\n");
	printf("*  A- Somar dois números        *\n");
	printf("*  B- Multiplicar dois números  *\n");
	printf("*  C- Subtrair dois números     *\n");
	printf("*  D- Dividir dois números      *\n");
	printf("*                               *\n");
	printf("*********************************\n");

	printf("\nAgora escolha a opção desejada: ");
	scanf("%c", &opcao);

	printf("Digite o primeiro número: ");
	scanf("%f", &numero1);

	printf("Digite o segundo número: ");
	scanf("%f", &numero2);

	if(opcao == 'A')
	{
		resultado = numero1 + numero2;
		printf("O resultado da soma é %.2f\n", resultado);
	}
	else
	{
		if(opcao == 'B')
		{
			resultado = numero1 * numero2;
			printf("O resultado da multiplicação é %.2f\n", resultado);
		}
		else
		{
			if(opcao == 'C')
			{
				resultado = numero1 - numero2;
				printf("O resultado da subtração é %.2f\n", resultado);
			}
			else
			{
				if(opcao == 'D')
				{
					resultado = numero1 / numero2;
					printf("O resultado da divisão é %.2f\n", resultado);
				}
				else
				{
					printf("Comando invalido!\n");
				}
			}
		}
	}

	return 0;
}