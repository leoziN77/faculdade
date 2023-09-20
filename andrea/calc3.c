#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int num_operacoes, opcao, i = 0;

    printf("*************************************************\n");
    printf("*                                               *\n");
    printf("*        Quantas opera��es ser�o feitas?        *\n");
    printf("*                                               *\n");
    printf("*************************************************\n");
    scanf("%d", &num_operacoes);

    float resultado[num_operacoes], numeros_resultado[num_operacoes], numeros_resultado2[num_operacoes];

    do {
        printf("\n\n*************************************\n");
        printf("*                                       *\n");
        printf("*              Menu de op��es           *\n");
        printf("*                                       *\n");
        printf("*                Adi��o = 1             *\n");
        printf("*              Subtra��o = 2            *\n");
        printf("*            Multiplica��o = 3          *\n");
        printf("*               Divis�o = 4             *\n");
        printf("*             Resultados = 5            *\n");
        printf("*                 Sair = 0              *\n");
        printf("*                                       *\n");
        printf("*****************************************\n");

        printf("Entre com a op��o desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // Adi��o
                printf("Selecione o primeiro n�mero: ");
                scanf("%f", &numeros_resultado[i]);
                printf("Selecione o segundo n�mero: ");
                scanf("%f", &numeros_resultado2[i]);

                resultado[i] = numeros_resultado[i] + numeros_resultado2[i];
                printf("%.2f + %.2f = %.2f\n", numeros_resultado[i], numeros_resultado2[i], resultado[i]);
                break;

            case 2: // Subtra��o
                printf("Selecione o primeiro n�mero: ");
                scanf("%f", &numeros_resultado[i]);
                printf("Selecione o segundo n�mero: ");
                scanf("%f", &numeros_resultado2[i]);

                resultado[i] = numeros_resultado[i] - numeros_resultado2[i];
                printf("%.2f - %.2f = %.2f\n", numeros_resultado[i], numeros_resultado2[i], resultado[i]);
                break;

            case 3: // Multiplica��o
                printf("Selecione o primeiro n�mero: ");
                scanf("%f", &numeros_resultado[i]);
                printf("Selecione o segundo n�mero: ");
                scanf("%f", &numeros_resultado2[i]);

                resultado[i] = numeros_resultado[i] * numeros_resultado2[i];
                printf("%.2f * %.2f = %.2f\n", numeros_resultado[i], numeros_resultado2[i], resultado[i]);
                break;

            case 4: // Divis�o
                printf("Selecione o primeiro n�mero: ");
                scanf("%f", &numeros_resultado[i]);
                printf("Selecione o segundo n�mero (n�o pode ser zero): ");
                scanf("%f", &numeros_resultado2[i]);

                if (numeros_resultado2[i] != 0) {
                    resultado[i] = numeros_resultado[i] / numeros_resultado2[i];
                    printf("%.2f / %.2f = %.2f\n", numeros_resultado[i], numeros_resultado2[i], resultado[i]);
                } else {
                    printf("Erro: Divis�o por zero n�o � permitida.\n");
                }
                break;

            case 5: // Resultados
                printf("Qual opera��o voc� quer ver o resultado? (0 a %d): ", num_operacoes - 1);
                scanf("%d", &i);
                if (i >= 0 && i < num_operacoes) {
                    printf("%.2f + %.2f = %.2f\n", numeros_resultado[i], numeros_resultado2[i], resultado[i]);
                } else {
                    printf("Opera��o fora do intervalo v�lido.\n");
                }
                break;

            case 0: // Sair
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Op��o inv�lida. Tente novamente.\n");
                break;
        }
    } while (i < num_operacoes);

    return 0;
}
