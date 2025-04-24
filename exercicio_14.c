// Exercício 14: Declarar dois valores reais e cinco caracteres
#include <stdio.h>

   int main() {
    float a, b;
    char c1, c2, c3, c4, c5;

    printf("Digite dois valores reais: ");
    scanf("%f %f", &a, &b);

    printf("Digite cinco caracteres: ");
    scanf(" %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5);

    printf("Valores reais: %.2f e %.2f\n", a, b);
    printf("Caracteres: %c, %c, %c, %c, %c\n", c1, c2, c3, c4, c5);
}
