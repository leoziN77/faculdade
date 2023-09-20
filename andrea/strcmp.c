#include <stdio.h>
#include <string.h>

int main() {
    char str1[5] = "hello";
    char str2[5] = "world";

    int resultado = strcmp(str1, str2);

    if (resultado < 0) {
        printf("str1 é menor que str2\n");
    } else if (resultado > 0) {
        printf("str1 é maior que str2\n");
    } else {
        printf("str1 é igual a str2\n");
    }

    return 0;
}
