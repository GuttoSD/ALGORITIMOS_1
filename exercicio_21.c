// Exercício 21: Verificar se o resto da divisão de dois números inteiros é ímpar
#include <stdio.h>

   int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    if (b != 0) {
        int resto = a % b;
        if (resto % 2 != 0) {
            printf("O resto da divisao é impar: %d\n", resto);
        } else {
            printf("O resto da divisao nao é impar.\n");
        }
    } else {
        printf("Erro: divisao por zero.\n");
    }
}
