// Exercício 11: Realizar uma divisão inteira
#include <stdio.h>

   int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    if (b != 0) {
        printf("O resultado da divisao é: %d\n", a / b);
    } else {
        printf("Erro: divisao por zero.\n");
    }
}
