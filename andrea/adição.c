#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//Declarar vari�vel
	int a;

	for (a = 1; a <= 25; a++)
	{
		/* code */
		printf("%d\n", a);
	}
	

	return 0;
}