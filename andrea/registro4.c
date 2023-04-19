#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>

struct st_registro{
    char titulo[20];
    int quantidade;
    float custo;
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    struct st_registro registro;
    int r, i=1;
    float custoestoque, menor = 10000;
    char tb[20]; //titulo menor

    printf("Quantos títulos deseja cadastrar: ");
    scanf("%d", &r);
    printf("-------------------------------------------------------\n");
        fflush(stdin);
    do{
        printf("Qual o título da revista ou do jornal: ");
        gets(registro.titulo);
		fflush(stdin);
        printf("Quantidade de revistas ou jornais em estoque: ");
        scanf("%d", &registro.quantidade);
        printf("Custo unitário do título: R$");
        scanf("%f", &registro.custo);
            fflush(stdin);
            custoestoque = registro.custo*registro.quantidade;
                system("cls");
            printf("Revista: %d\n", 1);
            printf("-------------------------------------------------------\n");
            printf("Título: %s\n", registro.titulo);
            printf("Quantidade: %d\n", registro.quantidade);
            printf("Custo unitário: R$%.2f\n", registro.custo);
            printf("Custo em estoque: R$%.2f\n", custoestoque);
            printf("-------------------------------------------------------\n");

            if(registro.custo < menor){
                menor = registro.custo;
                strcpy(tb, registro.titulo);
            }
            i++;
    }
    while (i <= r);
    printf("-------------------------------------------------------\n");
    printf("O título mais barato é: %s", tb);

    return 0;
}
