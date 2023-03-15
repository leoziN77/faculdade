#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portugue");
	char sexo;

	printf("Digite seu gênero: M/F\n");
	scanf("%c", &sexo);

	if(sexo == 'F')
	{
		printf("É mulher!");
	}

	return 0;
}