/* Esse código pede para o usuário digitar dois números inteiros. 
Depois, ele soma esses dois números e mostra o resultado na tela. */

#include <stdio.h>

   int main() {
    int num_a, num_b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num_a, &num_b);

    printf("A soma dos numeros é: %d\n", num_a + num_b);
}
