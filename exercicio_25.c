// Exercício 25: Receber 6 números possíveis de um sorteio
#include <stdio.h>

   int main() {
    int numeros[6];

    printf("Digite 6 numeros para o sorteio: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Os numeros digitados para o sorteio foram: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}
