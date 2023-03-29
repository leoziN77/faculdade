#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//Declarar variável
	char nome[20], quarto;
	int diarias_utilizadas;
	float valor_unitario, valor_total_diaria, valor_consumo, subtotal, total, taxa;

	printf("\n*********************************\n");
	printf("*                               *\n");
	printf("*         Menu de opções        *\n");
	printf("*                               *\n");
	printf("*      Quarto A - R$150,00      *\n");
	printf("*      Quarto B - R$100,00      *\n");
	printf("*      Quarto C - R$75,00       *\n");
	printf("*      Quarto D - R$50,00       *\n");
	printf("*                               *\n");
	printf("*********************************\n");

	printf("\nQual o quarto escolhido: ");
	scanf("%c", &quarto);
	quarto = toupper(quarto);

	if((quarto < 'A' || quarto > 'D') && (quarto < 'a' || quarto > 'd'))
	{
		printf("Quarto escolhido inválido!\n");
	}
	else
	{
		if(quarto == 'A' || quarto == 'a') {
            valor_unitario = 150.00;
        }
		else
		{
			if(quarto == 'B' || quarto == 'b')
			{
           		 valor_unitario = 100.00;
			}
			else
			{
				if(quarto == 'C' || quarto == 'c')
				{
					valor_unitario = 75.00;
				}
				else
				{
					if(quarto == 'D' || quarto == 'd')
					{
						valor_unitario = 50.00;
					}
				}
			}
		}

		printf("Digite seu nome: ");
		scanf("%s", &nome);

		printf("Digite quantos dias ficou hospedado: ");
		scanf("%d", &diarias_utilizadas);
		if(diarias_utilizadas <1 || diarias_utilizadas >30)
		{
			printf("Dias inválidos!");
		}
		else
		{
			printf("Digite o valor de consumo interno: R$");
			scanf("%f", &valor_consumo);

			valor_total_diaria = valor_unitario * diarias_utilizadas;
			subtotal = valor_total_diaria + valor_consumo;
			taxa = subtotal * 0.1;
			total = subtotal + taxa;

			system("cls");

			printf("\nNome: %s\n", nome);
			printf("Número de diárias: %d\n", diarias_utilizadas);
			printf("Valor de consumo interno: R$%.2f\n", valor_consumo);
			printf("Valor do quarto: R$%.2f\n", valor_unitario);
			printf("Valor total das diárias: R$%.2f\n", valor_total_diaria);
			printf("Subtotal: R$%.2f\n", subtotal);
			printf("Valor cobrado da taxa: R$%.2f\n", taxa);
			printf("Valor total da sua estadia: R$%.2f\n", total);

		}
	}

	return 0;
}