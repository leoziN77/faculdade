#include <stdio.h>

int main() {
	float dvd1, total;

	//%f representa o local onde será escrita uma variável float
	//Solicita ao usuário o valor dos Dvds
	printf("Digite o valor do primeiro Dvd: ");
	scanf("%f", &dvd1);

	//Calcula o valor total
	total = dvd1 * 3;

	//Utilizei %.2f\n para representar 2 casas decimais
	//Exibe o valor total da compra
	printf("O valor total da compra e: R$%.2f\n", total);

	return 0;
}