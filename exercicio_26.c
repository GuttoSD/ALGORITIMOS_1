/* Lê dois números inteiros digitados.
Soma os dois valores informados.
Exibe se a soma é maior ou igual a 10. */

#include <stdio.h>

   int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    if (a + b >= 10) {
        printf("A soma dos numeros é maior ou igual a 10.\n");
    } else {
        printf("A soma dos numeros nao é maior ou igual a 10.\n");
    }
}
