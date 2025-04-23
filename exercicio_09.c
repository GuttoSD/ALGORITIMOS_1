// Exercício 9: Verificar se o número é par ou ímpar
#include <stdio.h>

   int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero é par.\n");
    } else {
        printf("O numero é impar.\n");
    }
}
