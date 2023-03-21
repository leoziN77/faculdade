#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float numero;

    printf("Digite um valor para descobrir se é divisível por 3 e 7: ");
    scanf("%f", &numero);

    if(numero / 3 && numero / 7)
    {
        printf("O número é divisível por 3 e 7.\n");
    }
    else{
        printf("O número não é divisível por 3 e 7.\n");
    }

    return 0;
}