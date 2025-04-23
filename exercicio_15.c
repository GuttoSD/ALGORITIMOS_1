// Exercício 15: Somar três números inteiros e calcular a média
#include <stdio.h>

   int main() {
    int a, b, c;

    printf("Digite três numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    int soma = a + b + c;
    float media = soma / 3.0;

    printf("A soma dos numeros é: %d\n", soma);
    printf("A media dos numeros é: %.2f\n", media);
}
