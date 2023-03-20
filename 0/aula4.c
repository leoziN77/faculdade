#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Insira o valor: ");
    scanf("%d", &n);

    if(n >= '20')
    {
        printf("Maior que 20!\n");
    }

    return 0;
}