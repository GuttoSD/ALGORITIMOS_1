/* Lê dois números inteiros digitados.
Soma os dois valores informados.
Exibe se a soma é maior ou igual a 10. */

#include <stdio.h>

   int main() {
    int num_1, num_2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num_1, &num_2);

    if (num_1 + num_2 >= 10) {
        printf("A soma dos numeros é maior ou igual a 10.\n");
    } else {
        printf("A soma dos numeros nao é maior ou igual a 10.\n");
    }
}
